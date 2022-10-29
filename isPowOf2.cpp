#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int num;
    cout << "**RETURN TRUE IF IS A POWER OF 2 ELSE RETURN FALSE**" << endl;
    cout << "Enter a number: ";
    cin >> num;
    int i = 0;

    while (i<31)
    {
        if (pow(2, i) == num)
        {
            cout << "TRUE" << endl;
            return 0;
        }
        i++;
    }
    cout << "FALSE" << endl;
    // return 0;
}