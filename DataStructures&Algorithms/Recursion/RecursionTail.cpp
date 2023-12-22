#include <iostream>
using namespace std;

void func(int x)
{
    if (x > 0)
    {
        cout << x << endl;
        func(x - 1);
    }
}

int main()
{
    cout << "Enter a number: ";
    int n = 0;
    cin >> n;
    func(n);
}