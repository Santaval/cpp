// Copyright <year> <You>
#include <iostream>

/**
 * @brief Start program execution.
 *
 * @return Status code to the operating system, 0 means success.
 */
int main() {
  int number;

  std::cout << "Ingrese el número: ";
  std::cin >> number;

  for(size_t count = 1; count <= 10; count++) {
    int mul = number * count;
    std::cout << number << "x" << count << "=" << mul << std::endl;
  }

}
