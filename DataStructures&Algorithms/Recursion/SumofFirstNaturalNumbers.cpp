#include <iostream>
using namespace std;

int sum(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else
    {
        return sum(n - 1) + n;
    }
}

int sumFormula(int n)
{
    return n * (n + 1) / 2;
}

int sumLoop(int n)
{
    int num = 0;
    for (int i = 1; i <= n; i++)
    {
        num = num + i;
    }

    return num;
}

int main()
{
    int i = 10;
    cout << sum(i) << endl;

    cout << sumFormula(i) << endl;

    cout << sumLoop(i) << endl;

    return 0;
}