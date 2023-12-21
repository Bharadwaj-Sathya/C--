#include <iostream>
using namespace std;
int factorial(int n);

int main() {
  // Factorial :5*4*3*2*1
  int n;
  cout << "Enter a value: ";
  cin >> n;

  cout << "Factorial of n is: " << factorial(n) << endl;

  return 0;
}

int factorial(int n) {
  if (n > 1) {
    return n * factorial(n - 1);
  } else {
    return 1;
  }
}