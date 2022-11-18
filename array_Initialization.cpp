#include <iostream>
using namespace std;

int main()
{
    int a[10000] = {0};

    for (int i = 0; i < 10000;i++)
    {
        cout<<*(a+i)<<" ";
    }
    
}