#include <iostream>
using namespace std;

int add(int x, int y) {
  int z = x + y;
  return z;
}

int main() {
  int num1 = 10;
  int num2 = 20;
  int sum;

  sum = add(num1, num2);
  cout << "Sum of " << num1 << " and " << num2 << " is: " << sum << endl;
}