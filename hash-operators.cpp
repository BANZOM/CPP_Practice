/******************************************************************************
# and ##
*******************************************************************************/

#include <iostream>
#define MKSTR(x) #x
#define CONCATEM(a,b) a ## b
using namespace std;

int main()
{
    string str1 = "hey";
    string str2 = "hi";
    int str3 = 100;
    cout<<MKSTR(hello)<<endl;
    cout<<CONCATEM(str,1)<<endl;
    cout<<CONCATEM(str,2)<<endl;
    cout<<CONCATEM(str,3)<<endl;
    
    return 0;
}
