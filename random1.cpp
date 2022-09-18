/******************************************************************************

Make logic strong

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int a = 11;
    int b = a + 3;

    if ((a = 3) == b)
    {
        cout << a;
    }
    else
    {
        cout << a << " Else";
    }

    return 0;
}
