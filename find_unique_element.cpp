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
int returnUnique(int a[], int n)
{
    return 0;
}
int main(int argc, char const *argv[])
{
    int size, arr[100];
    cout << "Enter the no. of elements: ";
    cin >> size;
    readArray(arr, size);

    cout << "The Unique element is: " << returnUnique(arr, size) << endl;
    return 0;
}
