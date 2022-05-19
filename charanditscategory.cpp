/******************************************************************************

input char
output its category like small char, capital char, numeric;

*******************************************************************************/
#include <iostream>

using namespace std;

int main()
{
    cout <<"Enter any character: ";
    char ch;
    cin>> ch;
    cout << ch << endl;
    if(ch >= 65 && ch <= 90  )
        cout << "Its an capital char";
    else if(ch >= 48 && ch <= 57){
        cout << "Its a numeric"; 
    }
       
    else if( ch >= 97 && ch <= 122 )
        cout << "Its an small char";

    return 0;
}
