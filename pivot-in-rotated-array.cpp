#include <iostream>
using namespace std;

int findPivot(int *arr, int n)
{
    int left = 0;
    int right = n - 1;
    int mid = left + (right - left) / 2;

    while (left < right)
    {
        if (arr[mid] < arr[0])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }

        mid = left + (right - left) / 2;
    }

    return mid; 
    // return left; // also works
}

int main()
{
    int arr[] = {2,3,4,5,1};
    int n = 5;

    cout << "The Pivot index is " << findPivot(arr, n) << endl;
    return 0;
}