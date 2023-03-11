/******************************************************************************

*****
 ****
  ***
   **
    *

*******************************************************************************/
#include <iostream>

using namespace std;
// code here
int main()
{
    int column;
    cin >> column;

    for (int i = 1; i <= column; i++)
    {

        for (int k = 1; k <= column; k++)
        {

            if (k < i)
            {
                cout << " ";
            }

            else
                cout << "*";
        }
        cout << endl;
    }

    return 0;
}
