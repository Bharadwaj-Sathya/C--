#include <iostream>
using namespace std;

int main()
{
    // Creating array in stack
    int a[5] = {2, 4, 6, 8, 9};

    for (int i = 0; i < 5; i++)
    {
        cout << a[i] << endl;
    }

    // Creating array in heap
    int *p = new int[10];
    cout << "Elements in P:" << endl;

    for (int i = 0; i < 10; i++)
    {
        p[i] = i;
        cout << p[i] << endl;
    }
    cout << "Elements in q:" << endl;

    int *q = new int[15];

    for (int i = 0; i < 10; i++)
    {
        q[i] = p[i];
    }

    for (int i = 0; i < 15; i++)
    {

        cout << q[i] << endl;
    }

    delete[] p;
    p = q;
    q = NULL;
    return 0;
}