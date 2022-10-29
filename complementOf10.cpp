#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int num, copy, mask;
    cout << "Enter a decimal number: ";
    cin >> num;

    copy = num;
    int i = 0;
    while (copy)
    {
        i++;
        copy = copy >> 1;
    }
    // cout<<i<<endl;

    mask = pow(2, i) - 1;
    cout << mask << endl;
}