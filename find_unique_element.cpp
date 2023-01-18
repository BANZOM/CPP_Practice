#include <iostream>
using namespace std;
void readArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        // cout << "Enter element at index " << i << ": ";
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
int search(int s, int a[], int n)
{
    int found = 0;
    for (int i = 0; i < n; i++)
    {
        if (s == a[i])
        {
            found += 1;
        }
    }
    if (found > 1)
    {
        return 0;
    }
    else
        return 1;
}
int returnUnique(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int found = search(a[i], a, n);
        if (found)
            return a[i];
    }
    return -1;
}

// optimize solution for this problem:
int returnXOR(int a[], int n)
{
    int element = 0;
    for (int i = 0; i < n; i++)
    {
        element = element ^ a[i];
    }
    return element;
}
int main(int argc, char const *argv[])
{
    int size, arr[100];
    cout << "Enter the no. of elements: ";
    cin >> size;
    readArray(arr, size);

    /**
     * @brief
     * a array contails n elements where n = m + 1
     * m is the no. of dublicate pairs
     * only 1 element is unique
     * printing that element
     */

    cout << "The Unique element is(-1 if not found): " << returnUnique(arr, size) << endl;

    // optimize
    cout << "From optimize method: " << returnXOR(arr, size) << endl;
    return 0;
}

/**
 * @brief
Enter the no. of elements: 7
3 6 6 4 4 1 1
The Unique element is(-1 if not found): 3
From optimize method: 3
 *
 */