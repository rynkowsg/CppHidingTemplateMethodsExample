//
//  Singleton.h
//  HidingTemplateMethodsExample
//
//  Created by Greg Rynkowski on 30/08/2017.
//  Copyright © 2017 Greg Rynkowski. All rights reserved.
//

#ifndef HIDINGTEMPLATEMETHODSEXAMPLE_SINGLETON_H
#define HIDINGTEMPLATEMETHODSEXAMPLE_SINGLETON_H

#include <iostream>
#include <memory>
#include <utility>

///
/// Template implementation of Singleton pattern.
///
template<class T>
class Singleton {
 public:
  using Ref = std::shared_ptr<T>;

  /// Returns the instance object of derivative class.
  template<typename... Args>
  static Ref getInstance(Args &&... args) {
    std::cout << "called Singleton<>::getInstance\n";
    static Ref instance{new T(std::forward<Args>(args)...)};
    return instance;
  }

  Singleton<T> *getThis() {
    std::cout << "called Singleton<>::getThis()\n";
    return this;
  }
};

#endif  // HIDINGTEMPLATEMETHODSEXAMPLE_SINGLETON_H
