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
    if (n >= 0)
    {
        while (n != 0)
        {
            int bit = n & 1;
            answer = (bit * pow(10, i)) + answer;
            n = n >> 1;
            i++;
        }
    }

    else
    {
        i = 0;
        n = pow(2,16) + n;
        // assuming we have 16 bit integer
        while (n)
        {
            int bit = n & 1;
            // cout << "**" << bit << "**" << endl;
            answer += (bit * pow(10, i));
            // cout << "****" << answer << "****" << endl;
            n = n >> 1;
            i++;
        }
    }

    cout << "The binary form is : " << answer << endl;
    // cout << "The binary form in signed magnitude if the number was negative is : " << pow(10, i) + answer << endl;
    return 0;
}