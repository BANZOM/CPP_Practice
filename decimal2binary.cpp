#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    long long int n;
    unsigned long long int answer = 0;
    cout << "Enter the decimal number: ";
    cin >> n;

    // logic
    unsigned long long int i = 0;
    if (n < 0)
    {
        n = pow(2, 16) + n;
    }

    while (n)
    {
        int lsb = n & 1;
        answer += (lsb * pow(10, i));
        n = n >> 1;
        i++;
    }

    cout << "The binary form is : " << answer << endl;

    // cout << "The binary form in signed magnitude if the number was negative is : " << pow(10, i) + answer << endl;

    return 0;
}