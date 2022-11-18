#include <iostream>
#include <climits>
using namespace std;

void readArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}
int getMax(int a[], int n)
{
    int large = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        large = max(large, a[i]);
    }
    return large;
}
int getMin(int a[], int n)
{
    int small = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        small = min(small, a[i]);
    }
    return small;
}
int main(int argc, char const *argv[])
{
    int size, arr[100];
    cout << "Enter the number of elements: ";
    cin >> size;
    cout << "Enter the elements: ";
    readArray(arr, size);

    cout << "Max Element is = " << getMax(arr, size) << endl;
    cout << "Min Element is = " << getMin(arr, size) << endl;
    return 0;
}


/**
 * @brief 
 * we can use both
 * min(a,b) to get the minimum from a or b
 * max(a,b) to get the maximum from a or b
 * 
 * or
 * 
 * the if statement
 * if(a>b) min = b
 * and so on
 * 
 */