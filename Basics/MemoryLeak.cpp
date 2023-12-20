#include <iostream>
using namespace std;

int main() {
  int *myPointer;
  int *anotherPointer;

  myPointer = new int[10];

  cout << "Memory Space located myPointer: " << myPointer << endl;

  delete[] myPointer;

  try {
    anotherPointer = new int[10];

    cout << "Memory Space located for anotherpointer: " << anotherPointer
         << endl;
  } catch (...) {
    cout << "Failed in allocating memory" << endl;
  }

  return 0;
}