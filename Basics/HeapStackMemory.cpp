#include <iostream>
using namespace std;

struct User {
  const int id;
  int age;

  User() : id(001), age(18){};
};

int main() {
  //  Stack Memory
  int score = 100;
  cout << "Score value is: " << score << endl;

  //  Heap Memory
  User mike;
  int* heap_score = new int;
  *heap_score = 200;

  User* nike = new User();

  delete heap_score;
  delete nike;

  return 0;
}