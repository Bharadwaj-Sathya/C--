#include <iostream>
using namespace std;

struct User {
  const int uId;      // you canot change the uid
  const char *name;   // pointer refers to memory not the value
  const char *email;  // yo can change because yopu are not pointintg to value
  int course_count;
};

int main() {
  User mickey = {001, "mickey", "mickey@anime.com", 2};
  User donald = {002, "donald", "donald@anime.com", 3};

  User *d = &donald;

  cout << "Mickey Email :" << mickey.email << endl;
  cout << "Donald Email :" << donald.email << endl;

  cout << "Donald course count :" << donald.course_count << endl;
  donald.course_count = 4;
  cout << "Donald course count :" << donald.course_count << endl;

  d->course_count = 7;
  cout << "Donald course count :" << donald.course_count << endl;
  cout << "Donald course count :" << d->course_count << endl;

  return 0;
}
