/******************************************************************************

sum of two numbers

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    int n1,n2,sum=0;
    cout<<"Enter two numbers seperated by space:\n";
    cin>>n1>>n2;
    
    sum = n1 + n2;
    
    cout <<n1 <<"+"<<n2<<"="<<sum;

    return 0;
}
