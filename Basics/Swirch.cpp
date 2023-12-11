#include <iostream>
using namespace std;

int main() {
  int rating = 5;

  switch (rating) {
    case 1:
      cout << "Your rating is: 1" << endl;
      break;
    case 2:
      cout << "Your rating is: 2" << endl;
      break;
    case 3:
      cout << "Your rating is: 3" << endl;
      break;
    case 4:
      cout << "Your rating is: 4" << endl;
      break;
    case 5:
      cout << "Your rating is: 5" << endl;
      break;
    default:
      cout << "Please rate between 1 to 5" << endl;
      break;
  }

  return 0;
}
