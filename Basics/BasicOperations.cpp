#include <iostream>
using namespace std;

int main() {
  int life = 3;
  int points = 4;
  int score = life / points;

  cout << "Score is:" << score << endl;
  score += 1;
  cout << "The value of score is:" << score << endl;

  return 0;
}