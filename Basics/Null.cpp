#include <iostream>
// #define NULL 0
using namespace std;

void printVal(int a) { printf("Integer value is %d\n", a); }

void printVal(double a) { printf("Double value is %d\n", a); }

void printVal(int *a) { printf("Pointer value is %d\n", a); }

int main() {
  printVal(nullptr);
  return 0;
}