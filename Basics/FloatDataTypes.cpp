#include <iostream>
using namespace std;

int main() {
  cout << "Float size is in bits: " << sizeof(long) * 8 << endl;
  float fl = 20.4 + 20.4;
  if (fl == 40.8) {
    cout << "The value is matching" << endl;
  } else {
    cout << "The value is not matching" << endl;
  }
  cout << "The Float valiuer of fl is: " << fl << endl;
  return 0;
}