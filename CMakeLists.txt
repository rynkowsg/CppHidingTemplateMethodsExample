cmake_minimum_required(VERSION 3.8)
project(HidingTemplateMethodsExample)

set(CMAKE_CXX_STANDARD 11)

if (MSVC)
  add_compile_options(/W4)
else()
  add_compile_options(-Wall -Wextra -Wpedantic)
endif()

set(SOURCE_FILES main.cpp Singleton.h Analytics.cpp Analytics.h)
add_executable(example ${SOURCE_FILES})
