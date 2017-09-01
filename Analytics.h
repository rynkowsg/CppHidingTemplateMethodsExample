//
//  Analytics.h
//  HidingTemplateMethodsExample
//
//  Created by Greg Rynkowski on 30/08/2017.
//  Copyright © 2017 Greg Rynkowski. All rights reserved.
//

#ifndef HIDINGTEMPLATEMETHODSEXAMPLE_ANALYTICS_H
#define HIDINGTEMPLATEMETHODSEXAMPLE_ANALYTICS_H

#include <string>

#include "Singleton.h"

class Analytics : public Singleton<Analytics> {
 public:
  static Analytics *getInstance();

  Analytics *getThis();

  Analytics();

  void reportEvent(std::string const &name) const;

 private:
  static Analytics *sInstance;
};

#endif  // HIDINGTEMPLATEMETHODSEXAMPLE_ANALYTICS_H
