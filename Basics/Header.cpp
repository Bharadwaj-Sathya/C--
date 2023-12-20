#include <iostream>

#include "adder.h"
using namespace std;

int main() {
  int a = 5;
  int b = 6;
  float x = 5.8;
  float y = 7.9;

  cout << addme(a, b) << endl;
  cout << addme(x, y) << endl;

  return 0;
}