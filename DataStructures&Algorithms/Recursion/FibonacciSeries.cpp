#include <iostream>
using namespace std;

int fibonacci(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        return fibonacci(n - 2) + fibonacci(n - 1);
    }
}

int fibonacciIterative(int n)
{
    if (n <= 1)
    {
        return n;
    }
    else
    {
        int a = 0;
        int b = 1;
        int sum = 0;
        for (int i = 2; i <= n; i++)
        {
            sum = a + b;
            a = b;
            b = sum;
        }

        return sum;
    }
}
int main()
{
    int x = 6;
    cout << "Fibbonacci Series: of " << x << " is: " << fibonacci(x) << endl;
    cout << "Fibbonacci Series: of " << x << " is: " << fibonacciIterative(x) << endl;

    return 0;
}