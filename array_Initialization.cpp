#include <iostream>
using namespace std;

int main()
{
    int a[100] = {-1}; // set the first value to -1 rest all get 0;
    int b[100] = { 0 };
    // fill(a[100],100,69);

    for (int i = 0; i < 100; i++)
    {
        cout << *(b + i) << " ";
    }
    cout << endl;
}