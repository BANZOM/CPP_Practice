#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int n, answer = 0;
    cout << "Enter the decimal number: ";
    cin >> n;

    // logic
    int i = 0;
    while (n != 0)
    {
        int bit = n & 1;
        answer = (bit * pow(10, i)) + answer;
        n = n >> 1;
        i++;
    }

    cout << "The binary form is : " << answer << endl;
    cout << "The binary form in signed magnitude if the number was negative is : " << pow(10, i) + answer << endl;
    return 0;
}