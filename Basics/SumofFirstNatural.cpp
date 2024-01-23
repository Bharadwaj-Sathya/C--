#include <iostream>
using namespace std;

int main()
{
    int num, result;

    cout << "Enter the number to get first n natural numbers:";
    cin >> num;

    result = num * (num + 1) / 2;

    cout << "The sum of " << num << " natural number is: " << result;
}