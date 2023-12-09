#include <iostream>
using namespace std;

int main()
{
    int num = 0;
    int *poin = &num;

    cout << "Value od num is: " << num << endl;
    cout << "Calue of pointer is: " << poin << endl;

    int &num1 = num; // References
    num1 = 100;      // If value changed in the reference variable then the refrenced variable also change

    cout << "Value od num is: " << num << endl;
    cout << "value of pointer is: " << poin;

    return 0;
}