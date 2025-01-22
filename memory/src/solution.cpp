// Copyright <year> <You>
#include <iostream>


double puntuacion = 7.6;

void allocateAndLeak() {
  int* leakPtr = new int(42);
}


void properAllocation() {
  int* properPtr = new int(99);
  delete properPtr;
}


void stackMemory() {
  int localVar = 10;
}


int main() {
  double localVariable = 4.0;
  stackMemory();
  allocateAndLeak();
  properAllocation();
}

