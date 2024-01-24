#include <iostream>
using namespace std;

int main()
{

    int preInc = 5, posInc = 5, preDec = 5, posDrec = 5;

    ++preInc;
    cout << "Pre Increment: " << preInc << endl;

    posInc++;
    cout << "Post Increment: " << posInc << endl;

    --preDec;
    cout << "Pre Decreement: " << preDec << endl;

    posDrec--;
    cout << "Pre Decreement: " << posDrec << endl;

    return 0;
}