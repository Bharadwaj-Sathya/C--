#include <iostream>
#include <string>
using namespace std;

template <typename T>
void func(T values) {
  cout << "First Function: " << values << endl;
}
template <typename T, typename... Args>
void func(T val, Args... args) {
  cout << "Second Function: " << val << endl;
  func(args...);
}

int main() {
  string str = "Bharadwaj";
  func(str);
  func(1, 2, 3, 4, 5.6, "Sathya");
  return 0;
}