#include <iostream>
using namespace std;

int main() {
  int val = 1;
  float f = 2.02;
  char ch = 's';
  try {
    cout << "Trying to throw a error" << endl;
    throw ch;
  } catch (int x) {
    cout << "Exception has handled." << endl;
  } catch (float f) {
    cout << "Exception has handled you got the float error." << endl;
  } catch (...) {
    cout << "Some error occured." << endl;
  }

  cout << "Keep on Moving with rest of code." << endl;

  return 0;
}