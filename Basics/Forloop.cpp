#include <iostream>
using namespace std;

int main() {
  int nums[] = {1, 2, 3, 4, 5};

  for (int i = 0; i < 5; i++) {
    cout << "The array value of " << i << " is: " << nums[i] << endl;
  }

  cout << "Break" << endl;

  for (int i : nums) {
    cout << "The array " << i << endl;
  }

  return 0;
}
