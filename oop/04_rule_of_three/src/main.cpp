/**********************************************
 * Project   : 04_rule_of_three
 * File      : ${NAME}.cpp
 * Author    : alexm
 * Created   : 17/10/2025
 * Copyright : (c) 2025 by alexm
 *
 * Description:
 *   ${DESCRIPTION}
 **********************************************/

#include <iostream>
#include "../include/Buffer.h"

int main() {
  Buffer b1 {"hello"};
  b1.print();
  Buffer b2 = b1;
  b2.print();
  Buffer b3 = b1;
  b3 = b1;
  b3.print();

  return 0;
}
