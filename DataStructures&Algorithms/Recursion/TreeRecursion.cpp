#include <iostream>
using namespace std;

void func(int n)
{
    if (n > 0)
    {
        cout << n << endl;
        func(n - 1);
        func(n - 1);
    }
}

int main()
{

    int i = 0;
    cout << "Enter a Number: ";
    cin >> i;

    func(i);

    return 0;
}