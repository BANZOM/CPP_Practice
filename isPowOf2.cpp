#include <iostream>
#include <math.h>

using namespace std;

bool isPowerOfTwo(int n)
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

int main()
{
    int num;
    cout << "**RETURN TRUE IF IS A POWER OF 2 ELSE RETURN FALSE**" << endl;
    cout << "Enter a number: ";
    cin >> num;

    if (isPowerOfTwo(num) == true)
        cout << "TRUE" << endl;
    else
        cout << "FALSE" << endl;

    // return 0;
}