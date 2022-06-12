/******************************************************************************

Pattern
ABC
BCD
CDE

*******************************************************************************/
#include<iostream>
using namespace std;

int main()
{
    int times=0;
    cin>>times;
    
    for (int i = 1; i <= times; i++) {
        char ch;
        
        for (int j = 1; j <= times; j++) {              // i+j-1 and for making it for character i+j-1+'A'-1 
            
            ch= 'A'+ i+j-1-1;
            cout<<ch<<" ";
            
        }
        cout<<endl;
    }

    return 0;
}
