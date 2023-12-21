#include <iostream>
#include <string>

// Macross
#define END return 0
#define ENDMESSAGE cout << "Program ends here\n"
#define MYINT int8_t

using namespace std;

int main() {
  MYINT a = 4;
  cout << a << endl;

  ENDMESSAGE;
  END;

  return 0;
}