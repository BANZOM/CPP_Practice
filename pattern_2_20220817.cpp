/******************************************************************************

    *
   **
  ***
 ****
*****

*******************************************************************************/
#include <iostream>

using namespace std;
//code here
int main()
{
    int column,j;
    cin>>column;
    
    for (int i = 1; i <= column; i++) {
        
        for ( j = 1; j <= column-i; j++) {
            
            cout<<" ";
            
        }
        for (int k = j; k <= column; k++) {
            
            cout<<"*";
            
        }
        cout<<endl;
    }

    return 0;
}

