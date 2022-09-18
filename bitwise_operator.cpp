#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "a & b {and} = " << (a & b) << endl;
    cout << "a | b {or} = " << (a | b) << endl;
    cout << "~a {not} = " << ~a << endl;
    cout << "~b {not} = " << ~b << endl;
    cout << "a ^ b {xor} = " << (a ^ b) << endl;

    // cout << "The result is: " << a << " " << b;
}