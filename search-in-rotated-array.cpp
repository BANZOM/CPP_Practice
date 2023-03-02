#include <iostream>
using namespace std;

int findPivot(int *arr, int n)
{
    int left = 0, right = n-1, mid;
    while (left<=right)
    {
        mid = left + (right-left)/2;

        if(arr[mid] >= arr[0])
            left = mid + 1;
        else 
            right = mid;
    }

    return mid;
}

int findIndex(int *arr, int n, int key)
{
    int pivot = findPivot(arr,n);
}

int main()
{
    int arr[] = {5, 8, 13, 2, 4};
    int n = 5;
    int key = 4;

    cout << "The element is at index : " << findIndex(arr, n, key) << endl;
    return 0;
}