#include <iostream>
using namespace std;

void funcA(int n)
{
    if (n > 0)
    {
        cout << "n" << endl;
        funcB(n - 1);
    }
}

void funcB(int n)
{
    if (n > 1)
    {
        cout << "n" << endl;
        funcB(n / 2);
    }
}

int main()
{

    funcA(20);
    return 0;
}