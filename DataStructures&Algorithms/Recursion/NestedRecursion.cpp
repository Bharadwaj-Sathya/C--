#include <iostream>
using namespace std;

int func(int n)
{
    if (n > 100)
    {
        return n - 10;
    }
    else
    {
        func(func(n + 11));
    }
}
int main()
{

    int i = 95;
    cout << func(i) << endl;
}