#include <iostream>
using namespace std;

int findMountainPeak(int arr[], int n)
{
    // using binary search approach
    int peak;
    int left = 0, right = n - 1;
    int mid = left + (right - left) / 2;
    while (left < right)
    {
        if (arr[mid] > arr[mid + 1])
        {
            right = mid;
        }
        if (arr[mid] < arr[mid + 1])
        {
            left = mid + 1;
        }

        // updating the mid
        mid = left + (right - left) / 2;
    }

    return mid;
}

int main()
{
    int n, arr[1000];
    cout << "Enter number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "The Peak element index is : " << findMountainPeak(arr, n) << endl;
    return 0;
}