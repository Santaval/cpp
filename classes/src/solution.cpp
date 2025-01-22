// Copyright <year> <You>
#include <iostream>
#include "Universe.cpp"

/**
 * @brief Start program execution.
 *
 * @return Status code to the operating system, 0 means success.
 */
int main() {
  Universe* universe = new Universe();
  universe->move();
  
}
