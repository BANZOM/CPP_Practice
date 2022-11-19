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
int main(int argc, char const *argv[])
{
    int n, arr[100];
    cout << "Enter the no. of elements: ";
    cin >> n;
    readArray(arr, n);

    return 0;
}
