#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int num, copy, mask, complement;
    cout << "Enter a decimal number: ";
    cin >> num;

    copy = num;
    int i = 0;

    // For finding the number of
    while (copy)
    {
        i++;
        copy = copy >> 1;
    }
    // cout<<i<<endl;

    mask = pow(2, i) - 1;
    // cout << mask << endl;

    // For complement of base 10
    complement = (~num) & mask;
    cout << "The Complement is: " << complement << endl;
    return 0;
}