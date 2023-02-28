#include <iostream>
using namespace std;

int first = -1, last = -1;

void firstOccr(int arr[], int left, int right, int key)
{
    int mid = left + (right - left) / 2;
    if (left > right)
        return;

    if (key == arr[mid])
    {
        first = mid;
        // go left
        firstOccr(arr, left, mid - 1, key);
    }
    else if (key > arr[mid])
    {
        firstOccr(arr, mid + 1, right, key);
    }
    else
    {
        firstOccr(arr, left, mid - 1, key);
    }
}

void lastOccr(int arr[], int left, int right, int key)
{
    int mid = left + (right - left) / 2;
    if (left > right)
        return;

    if (key == arr[mid])
    {
        last = mid;
        // go right
        lastOccr(arr, mid + 1, right, key);
    }
    else if (key > arr[mid])
    {
        lastOccr(arr, mid + 1, right, key);
    }
    else
    {
        lastOccr(arr, left, mid - 1, key);
    }
}

int main()
{
    int n, arr[1000], key;
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> key;

    firstOccr(arr, 0, n - 1, key);
    lastOccr(arr, 0, n - 1, key);

    cout << "First occurance is at index " << first << ", Last occurance is at index " << last << endl;
    cout << "Total number of occurance = " << last - first << endl;
    return 0;
}
