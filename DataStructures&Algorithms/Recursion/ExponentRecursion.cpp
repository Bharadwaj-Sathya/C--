#include <iostream>
using namespace std;

int pow(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return pow(m, n - 1) * m;
    }
}

int power(int m, int n)
{
    if (n == 0)
    {
        return 1;
    }
    if (n % 2 == 0)
    {
        return power(m * m, n / 2);
    }
    return m * power(m * m, (n - 1) / 2);
}
int main()
{
    int i = 0;
    int n = 5;

    cout << pow(2, 9) << endl;
    cout << power(2, 9) << endl;

    return 0;
}