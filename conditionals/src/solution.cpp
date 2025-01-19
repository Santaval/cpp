// Copyright <year> <You>
#include <iostream>

/**
 * @brief Start program execution.
 *
 * @return Status code to the operating system, 0 means success.
 */
int main() {
 int num1;
 int num2;

 std::cout << "Ingrese el primer número: ";
 std::cin >> num1;

 std::cout << "Ingrese el segundo número: ";
 std::cin >> num2;

 if(num1 > num2) {
  std::cout << "El número 1 (" << num1 << ") es mayor" << std::endl;
 } else {
  std::cout << "El número 2 (" << num2 << ") es mayor" << std::endl;
 }

}
