/******************************************************************************

11 june 2022
printing 

AAA
BBB
CCC

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    char print= 'A';
    int times=0;
    cin>>times;
    for (int i = 0; i < times; i++) {
        for (int j = 0; j < times; j++) {
            cout<<print<<" ";
        }
        print++;
        cout<<endl;
    }

    return 0;
}
