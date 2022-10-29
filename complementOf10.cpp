#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int num, copy, mask, complement;
    cout << "Enter a decimal number: ";
    cin >> num;

    // Edge case: number = 0 
    if (num == 0)
    {
        cout << "The Complement is: 1" << endl;
        return 0;
    }

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

/**
 *
 * 
Another approach:

int bitwiseComplement(int n) {
    if(n==0)
        return 1;
    int mask=0,copy=n;

    while (copy)
    {
        mask= (mask<<1) | 1;
        copy = copy >> 1;
    }

    return (~n) & mask;
    }
 *
 */