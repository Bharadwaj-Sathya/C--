#include <iostream>
using namespace std;

void func(int x)
{
    if (x > 0)
    {
        func(x - 1);
        cout << x << endl;
    }
}

int main()
{
    cout << "Enter a number: ";
    int n = 0;
    cin >> n;
    func(n);
}