#include <iostream>
using namespace std;

// void func(int *A, int n) {
void func(int A[], int n) {
  for (int i = 0; i < n; i++) {
    cout << "The Array value of position " << i << " is: " << A[i] << endl;
  }
}

int* func(int n) {
  int* p;
  p = new int[n];

  for (int i = 0; i < n; i++) {
    p[i] = i + 1;
  }

  return p;
}

int main() {
  int A[5] = {10, 20, 30, 40, 50};
  int x = 5;
  func(A, x);
  int* y = func(x);
  func(y, x);

  return 0;
}