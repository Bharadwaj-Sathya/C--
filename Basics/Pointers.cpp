#include <iostream>
using namespace std;

int main()
{
    int num = 4;
    num = 10;

    int num1 = 234;
    num1 = 673463;

    int num2 = num1;

    int *poin;
    poin = &num2;

    num2 = *poin; // We are dereferencing the pointer and copying value which pointer has (673463 in num  2
    cout << "value of num2 is: " << num2 << endl;
    cout << "Ponter of pointer is: " << poin;

    return 0;
}