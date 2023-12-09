#include <iostream>
#include <string>
using namespace std;

int main()
{
    cout << "------------Data Types Primitive------------ \n";
    cout << "Type                         Keyweord                        Size\n";
    cout << "Boolean                      bool                           "
         << sizeof(bool) << endl;
    cout << "Character                    char                           "
         << sizeof(char) << endl;
    cout << "Integer                      int                            "
         << sizeof(int) * 8 << endl;
    cout << "Short Integer                short int                      "
         << sizeof(short int) * 8 << endl;
    cout << "Long Integer                 long int                       "
         << sizeof(long int) * 8 << endl;
    cout << "Long Long Integer            long long int                  "
         << sizeof(long long int) * 8 << endl;
    cout << "Floating point               float                          "
         << sizeof(float) * 8 << endl;
    cout << "Double Floating point        double                         "
         << sizeof(double) * 8 << endl;
    cout << "Valueless                    void                           "
         << sizeof(0) << endl;
    cout << "------------Data Types Primitive------------- \n";

    string str;
    cout << "Enter your string: ";
    getline(cin, str);
    cout << "Entered string is: " << str;
    return 0;
}