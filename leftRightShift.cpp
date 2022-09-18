#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter a numbers: ";
    cin >> a;
    cout << "Left shift by :";
    cin >> b;

    cout << "a << b {left shift} = " << (a << b) << endl;

    cout << "Right shift by :";
    cin >> b;
    cout << "a >> b {right shift} = " << (a >> b) << endl;
}