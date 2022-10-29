#include <iostream>
#include<climits>
#include <math.h>

using namespace std;

bool isPowerOfTwoMet1(int n)
{

    for (int i = 0; i < 31; i++)
    {
        if (pow(2, i) == n)
        {
            return true;
        }
    }

    return false;
}

bool isPowerOfTwoMet2(int n) // method 2
{
    if (n <= 0)
        return false;
    return (n & (n - 1)) == 0;
}

bool isPowerOfTwoMet3(int n) // method 3
{
    int ans = 1;

    for (int i = 0; i <= 31; i++)
    {
        if (ans == n)
            return 1;
        if (ans < INT_MAX / 2)
            ans = ans * 2;
    }

    return 0;
}
int main()
{
    int num;
    cout << "**RETURN TRUE IF IS A POWER OF 2 ELSE RETURN FALSE**" << endl;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwoMet3(num) == true)
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;

    return 0;
}