#include <iostream>
using namespace std;

/*
   ++i : pre increment
   i++ : post increment
*/

int main()
{
    int a;
    cout << "Enter value of a: ";
    cin >> a;

    cout << a++ << endl;
    // o/p: a then a=a+1;

    cout << ++a << endl;
    // o/p: a+1 then a=a;

    cout << a-- << endl;
    // o/p: a then a=a-1;

    cout << --a << endl;
    // o/p: a-1 then a=a;

    cout << a;
    return 0;
}
