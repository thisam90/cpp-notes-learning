/**********************************************
 * Project   : 03.02.InventoryItemClass
 * File      : Invetory.cpp
 * Author    : alexm
 * Created   : 16/10/2025
 * Copyright : (c) 2025 by alexm
 *
 **********************************************/
#include "../include/Inventory.h"

#include <iostream>
#include <ostream>

Inventory::Inventory() : name_("Unknown"), quantity_(0), price_(0) {}
Inventory::Inventory(const std::string& name, const int quantity, const double price) {
  name_ = name;
  quantity_ = quantity;
  price_ = price;
}

// Inventory::~Inventory() = default;
   Inventory::~Inventory() {
    std::cout << "Item destroyed: " << name_ << std::endl;
}


void Inventory::add_stock(int amount) {
  if (amount > 0) {
    quantity_ += amount;
    std::cout << "Added " << amount << " units" << std::endl;
  }
}
void Inventory::remove_stock(int amount) {
  if (amount > 0 && amount <= quantity_){
    quantity_ -= amount;
    std::cout << "Removed " << amount << " units" << std::endl;
  }
}
double Inventory::total_value() const {

  return quantity_ * price_;
}
void Inventory::display() const {
  std::cout << "Item: " << name_ << "\n"
            << "Quantity: " << quantity_ << "\n"
            << "Price: $" << price_ << "\n";
}