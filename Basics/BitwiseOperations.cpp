#include <iostream>
using namespace std;

int main() {
  unsigned int x = 6;
  unsigned int y = 5;

  unsigned int z = x & y;  // and

  cout << "Value of z is:" << z << endl;

  unsigned int k = x ^ y;  // xor

  cout << "Value of k is:" << k << endl;

  unsigned int l = x | y;  // or

  cout << "Value of l is:" << l << endl;

  return 0;
}