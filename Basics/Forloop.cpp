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
  cout << "Break" << endl;

  char str[] = "Bharaadwaj Sathya";
  char str1[] = {'S', 'a', 't', 'h', 'y', 'a', 0};
  cout << "Break" << endl;

  cout << "My name is: " << str << endl;
  cout << "My name is: " << str1 << endl;
  cout << "Break" << endl;

  for (char i : str1) {
    cout << "Character is:" << i << endl;
  }
  cout << "Break" << endl;

  for (int i = 0; str1[i] != 0; i++) {
    cout << "The Character value of str1 is: " << str1[i] << endl;
  }

  cout << "Break" << endl;

  for (char *cp = str1; *cp != 0; cp++) {
    cout << "The Character value of str1 in pointer is: " << *cp << endl;
  }

  return 0;
}
