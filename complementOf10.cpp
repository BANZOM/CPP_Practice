#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    unsigned long long int num, copy;
    cout << "Enter a decimal number: ";
    cin >> num;

    copy = num;
    int i = 0;
    while (copy)
    {
        i++;
        copy = copy >> 1;
    }
    cout<<i<<endl;
}