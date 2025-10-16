/**********************************************
 * Project   : 03.02.InventoryItemClass
 * File      : main.cpp
 * Author    : alexm
 * Created   : 16/10/2025
 * Copyright : (c) 2025 by alexm
 *
 **********************************************/

#include <iostream>
#include "../include/Inventory.h"

int main() {

  Inventory item{"Keyboard", 10, 49.99};
  item.display();

  item.add_stock(5);
  item.remove_stock(3);
  std::cout << "Total value: $" << item.total_value() << "\n";

    return 0;
}
