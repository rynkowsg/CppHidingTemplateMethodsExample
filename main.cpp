//
//  main.cpp
//  HidingTemplateMethodsExample
//
//  Created by Greg Rynkowski on 30/08/2017.
//  Copyright © 2017 Greg Rynkowski. All rights reserved.
//

#include <iostream>

#include "Analytics.h"

int main(int /*argc*/, const char */*argv*/[]) {

  std::cout << "HIDING STATIC METHOD `getInstance()`: \n\n";
  auto const &instance1 = Analytics::getInstance();
  std::cout << "created 1st instance: " << instance1 << std::endl;
  auto const &instance2 = instance1->Singleton<Analytics>::getInstance();
  std::cout << "created 2nd instance: " << instance2 << std::endl;
  std::cout << "\n=========================================\n\n";

  std::cout << "HIDING INSTANCE METHOD `getThis()` (1): \n\n";
  auto const this1a = instance1->getThis();
  std::cout << "this1a = " << this1a << std::endl;
  auto const this1b = instance1->Singleton<Analytics>::getThis();
  std::cout << "this1b = " << this1b << std::endl;
  std::cout << "\n=========================================\n\n";

  std::cout << "HIDING INSTANCE METHOD `getThis()` (2): \n\n";
  auto const this2a = instance2->getThis();
  std::cout << "this2a = " << this2a << std::endl;
  auto const this2b = instance2->Singleton<Analytics>::getThis();
  std::cout << "this2b = " << this2b << std::endl;
  return 0;
}
