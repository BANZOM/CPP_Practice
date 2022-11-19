#include <iostream>
using namespace std;
void readArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << "Enter element at index " << i << ": ";
        cin >> a[i];
    }
}
void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}
void alternateSwap(int a[], int n)
{
    
}
int main(int argc, char const *argv[])
{
    int n, arr[100];
    cout << "Enter the no. of elements: ";
    cin >> n;
    readArray(arr, n);

    cout << "Before Alternate swap: ";
    printArray(arr, n);

    // alternate swap
    alternateSwap(arr, n);

    cout << "After Alternate swap: ";
    printArray(arr, n);
    return 0;
}
