/******************************************************************************

D
CD
BCD
ABCD

*******************************************************************************/
#include <iostream>

using namespace std;
int main()
{
    int column;
    cin>>column;
    
    for (int i = 0; i <= column; i++) {
        char c= 65+column-i;
        for (int j = 0; j < i; j++) {
            cout<<c;
            c++;
        }
        cout<<endl;
    }

    return 0;
}
