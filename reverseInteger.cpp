#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int reverse(int x)
{

    int ans = 0;

    while (x)
    {

        if ((ans < INT_MIN / 10) || (ans > INT_MAX / 10))
        {
            return 0;
        }

        ans = ans * 10 + x % 10;

        x = x / 10;
    }

    return ans;
}

int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << "The reverse is : " << reverse(num) << endl;
    return 0;
}