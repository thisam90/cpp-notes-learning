/**********************************************
 * Project   : 03.02.InventoryItemClass
 * File      : Inventory.cpp
 * Author    : alexm
 * Created   : 16/10/2025
 * Copyright : (c) 2025 by alexm
 *
 **********************************************/

#ifndef INC_03_02_INVENTORYITEMCLASS_INVENTORY_H
#define INC_03_02_INVENTORYITEMCLASS_INVENTORY_H
#include <string>

class Inventory {
private:
  std::string name_;
  int quantity_;
  double price_;

public:
  Inventory();
  Inventory(const std::string& name, int quantity, double price)
    : name_(name), quantity_(quantity), price_(price) {}
  ~Inventory();

  void add_stock(int amount);
  void remove_stock(int amount);
  [[nodiscard]] double total_value() const;
  void display() const;



};

#endif // INC_03_02_INVENTORYITEMCLASS_INVENTORY_H
