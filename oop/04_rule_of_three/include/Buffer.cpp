//
// Created by Alex Manolache on 17/10/2025.
//

#include "Buffer.h"
#include <cstring>
#include <iostream>

Buffer::Buffer(const char *text){
  std::size_t len = std::strlen(text);
  data_ = new char[size_ + 1];
  std::memcpy(data_, text, len);
}
Buffer::Buffer(const Buffer &other) {
  size_ = other.size_;
  data_ = new char[size_ + 1];
  std::strcpy(data_, other.data_);
  std::cout << "[Copy Constructor]\n";

}
Buffer &Buffer::operator=(const Buffer &other) {
  if (this == &other) {
    return *this; // self-assignment guard
  }

  delete[] data_; // free existing memory

  size_ = other.size_;
  data_ = new char[size_ + 1];
  std::strcpy(data_, other.data_);
  std::cout << "[Copy Assignment]\n";
  return *this;

}

Buffer::~Buffer() {
  delete[] data_;
  data_ = nullptr;
  std::cout << "[Destructor] Freed Memory" << std::endl;
}
void Buffer::print() const {
  std::cout << data_ << std::endl;
}
