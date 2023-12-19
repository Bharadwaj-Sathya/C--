#include <iostream>
using namespace std;

void helloWorld() { cout << "Hello World" << endl; }
void print() { cout << "Creating a print statement" << endl; }

int func() { return 2; }

int main() {
  helloWorld();
  print();

  cout << "Returning statement from func: " << func() << endl;
  return 0;
}