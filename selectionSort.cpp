#include <iostream>
using namespace std;

void readArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the no. of elements : ";
    cin >> n;

    int a[n];
    cout << "Enter the elements : ";
    readArray(a, n);

    cout << "Before Sorting : ";
    printArray(a, n);

    // Selection Sort calling
    selectionSort(a, n);

    cout << "After Selection Sort : ";
    prinArray(a, n);

    return 0;
}
