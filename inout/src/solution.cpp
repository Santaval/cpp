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


 int suma = num1 + num2;

 std::cout << "La suma es: " << suma << std::endl;
 
}
