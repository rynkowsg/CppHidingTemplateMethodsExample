//
//  Analytics.cpp
//  HidingTemplateMethodsExample
//
//  Created by Greg Rynkowski on 30/08/2017.
//  Copyright © 2017 Greg Rynkowski. All rights reserved.
//


#include "Analytics.h"

#include <iostream>

Analytics *Analytics::sInstance = nullptr;

Analytics *Analytics::getInstance() {
  std::cout << "called Analytics::getInstance()\n";
  if (sInstance == nullptr) {
    sInstance = new Analytics();
  }
  return sInstance;
}

Analytics::Analytics() {
  std::cout << "called Analytics::Analytics()\n";
}

void Analytics::reportEvent(std::string const &name) const {
  std::cout << "Analytics::reportEvent(name: '" << name << "')\n";
}

Analytics *Analytics::getThis() {
  std::cout << "called Analytics::getThis()\n";
  return this;
}
