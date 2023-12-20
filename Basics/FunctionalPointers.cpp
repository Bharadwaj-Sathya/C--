#include <iostream>
using namespace std;

int getVal() { return 2; }

void func() { puts("Iam Intresting"); }

int main() {
  int value = getVal();

  void (*functionValue)() = func;

  cout << value << endl;
  functionValue();
  (*functionValue)();

  return 0;
}