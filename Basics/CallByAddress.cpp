#include <iostream>
using namespace std;

void swap(int *x, int *y) {
  int temp;
  temp = *x;
  *x = *y;
  *y = temp;
}

int main() {
  int num1 = 10;
  int num2 = 20;

  cout << "First number before swap is: " << num1 << endl;
  cout << "Second number before swap is: " << num2 << endl;

  swap(&num1, &num2);

  cout << "First number after swap is: " << num1 << endl;
  cout << "Second number after swap is: " << num2 << endl;

  return 0;
}