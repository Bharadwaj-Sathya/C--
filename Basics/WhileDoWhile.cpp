#include <iostream>
using namespace std;

int main() {
  int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};

  int i = 0;
  while (i < 7) {
    if (i == 3) {
      i++;
      continue;
    }
    cout << "The array value is: " << arr[i] << endl;
    i++;
  }

  i = 8;

  do {
    cout << "Current number is: " << arr[i] << endl;

  } while (i < 8);

  cout << "We are out of the loop" << endl;

  return 0;
}