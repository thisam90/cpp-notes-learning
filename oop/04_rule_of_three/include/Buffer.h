//
// Created by Alex Manolache on 17/10/2025.
//

#ifndef INC_04_RULE_OF_THREE_BUFFER_H
#define INC_04_RULE_OF_THREE_BUFFER_H
#include <cstddef>

class Buffer {
private:
  char *data_ = nullptr;
  std::size_t size_ = 0;

public:

  explicit Buffer(const char *text);

  //MARK: Copy constructor deep_copy
  Buffer(const Buffer &other);

  //MARK: Copy assignment operator (deep copy)
  Buffer&operator=(const Buffer &other);
  ~Buffer();

  [[nodiscard]] void print() const;

};

#endif // INC_04_RULE_OF_THREE_BUFFER_H
