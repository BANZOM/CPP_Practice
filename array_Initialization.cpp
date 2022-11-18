#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int a[100] = {-1}; // set the first value to -1 rest all get 0;
    int b[100] = {0};  // set all the values to zero
    
    fill_n(b,100,69); // set all the vaues to a particual num, here 69;

    for (int i = 0; i < 100; i++)
    {
        cout << *(b + i) << " ";
    }
    cout << endl;
}