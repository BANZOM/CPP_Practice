#include <iostream>
using namespace std;

int findPivot(int *arr, int n)
{
    int left = 0, right = n - 1, mid;
    while (left < right)
    {
        mid = left + (right - left) / 2;

        if (arr[mid] >= arr[0])
            left = mid + 1;
        else
            right = mid;
    }

    return mid;
}

int binarySearch(int *arr, int left, int right, int key)
{
    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] > key)
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int findIndex(int *arr, int n, int key)
{
    int pivot = findPivot(arr, n);

    if (key >= arr[pivot] && key < arr[0])
        return binarySearch(arr, pivot, n - 1, key);
    else
        return binarySearch(arr, 0, pivot - 1, key);
}

int main()
{
    int arr[] = {5, 8, 13, 2, 4};
    int n = 5;
    int key = 14;

    cout << "The element is at index : " << findIndex(arr, n, key) << endl;
    return 0;
}