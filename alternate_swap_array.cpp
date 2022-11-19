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
// void swap(int *a, int *b)
// {
//     int temp = *a;
//     *a = *b;
//     *b = temp;
// }
void alternateSwap(int a[], int n)
{
    for (int i = 0; i < n; i += 2)
    {
        if (i != n - 1)
        {
            swap(a[i], a[i + 1]);
        }
    }
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

/**
 * @brief 
Enter the no. of elements: 5
Enter element at index 0: 32
Enter element at index 1: 23
Enter element at index 2: 45
Enter element at index 3: 54
Enter element at index 4: 99
Before Alternate swap: 32 23 45 54 99 
After Alternate swap: 23 32 54 45 99 
 * 
 */