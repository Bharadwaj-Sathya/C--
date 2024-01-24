#include <iostream>
using namespace std;

#define PI 3.14;

enum MsOffice
{
  BOLD = 5,
  ITALICS,
  UNDERLINED,
  CROSSED
};

int main()
{
  int myAttributes = UNDERLINED;
  float PiAttribute = PI;
  cout << "Preprocessor value is: " << PiAttribute << endl;

  cout << "UNDERLINED is: " << myAttributes << endl;
  return 0;
}