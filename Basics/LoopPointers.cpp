#include <iostream>
using namespace std;

int main() {
  char ch[] = "BharadwajSathya";

  for (int i = 0; ch[i]; i++) {
    cout << "Character is: " << ch[i] << endl;
  }

  cout << "Break" << endl;

  for (char *cp = ch; *cp != 0; cp++) {
    cout << "Character is: " << *cp << endl;
  }

  cout << "Break" << endl;

  for (char j : ch) {
    if (j == 0) {
      break;
    }

    cout << "Character is: " << j << endl;
  }

  return 0;
}