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
  
  while (number % 2 == 0) {
    int square = number * number;
    std::cout << "El cuadrado de " << number << " es: " << square << std::endl;

    std::cout << "Ingrese el número: ";
    std::cin >> number;
  }

}
