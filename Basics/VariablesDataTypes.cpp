#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "------------Data Types Primitive------------ \n";
    cout << "Type                         Keyweord\n";
    cout << "Boolean                      bool \n";
    cout << "Character                    char \n";
    cout << "integer                      int  \n";
    cout << "Floating point               float \n";
    cout << "Double Floating point        double \n";
    cout << "Valueless                    void \n";
    cout << "------------Data Types Primitive------------ \n";

    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    cout << "Entered string is: " << str;
    return 0;
}