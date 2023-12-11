#include <iostream>

using namespace std;

int main() {
  int num = 10;
  int num1 = 10;

  if (num > num1) {
    cout << "num is greater than num1" << endl;
  } else if (num1 > num) {
    cout << "num1 is greater than num" << endl;
  } else {
    cout << "Both are equal" << endl;
  }

  bool val = true;

  printf(val ? "True" : "False");

  return 0;
}