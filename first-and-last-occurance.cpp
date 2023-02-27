#include <iostream>
using namespace std;

int first = -1, last = -1;
void firstOccr(int arr[], int left, int right, int key)
{
    int mid = left + (right - left) / 2;
    if (key == arr[mid])
    {
        first = mid;
        // go left
        firstOccr(arr,left,mid-1,key);
    }
    else if (key > arr[mid])
    {
        firstOccr(arr,mid+1,right,key);
    }
    else
    {
        firstOccr(arr,left,mid-1,key);
    }
}
int lastOccr(int arr[], int left, int right, int key)
{
    return -1;
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
    cout << "First occurance is " << first << ", Last occurance is " << last << endl;

    return 0;
}
