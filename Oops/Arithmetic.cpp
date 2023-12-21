#include <iostream>
using namespace std;

class Arthmetic
{
private:
    int a;
    int b;

public:
    Arthmetic()
    {
        this->a = 0;
        this->b = 0;
    }
    Arthmetic(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    int add()
    {
        int c;
        c = a + b;
        return c;
    }
    int sub()
    {
        int c;
        c = a - b;
        return c;
    }
};

int main()
{
    Arthmetic a(10, 5);

    int addition = a.add();
    int subtraction = a.sub();

    cout << "ADD: " << addition << endl;
    cout << "SUB: " << subtraction << endl;

    return 0;
}