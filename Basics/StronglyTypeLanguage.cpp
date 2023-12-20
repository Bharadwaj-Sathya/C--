#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

string api_call() { return "Got some data\n"; }

int another_api_call() { return 5; }
int main() {
  auto response = api_call();
  auto res = another_api_call();

  cout << "API call value: " << response << endl;

  if (typeid(response) == typeid(string)) {
    cout << "Both types are matching Striing" << endl;
  }

  if (typeid(res) == typeid(int)) {
    cout << "Both types are matching Integer" << endl;
  }

  return 0;
}