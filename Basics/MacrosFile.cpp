#include <iostream>
#include <string>

// Macross
#define END return 0
#define ENDMESSAGE cout << "Program ends here\n"
#define MYINT int8_t
#define console_log(a) cout << a << endl

using namespace std;

int main() {
  int a = 4;
  cout << a << endl;

  console_log(a);

  ENDMESSAGE;
  END;

  return 0;
}