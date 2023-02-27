#include <iostream>
using namespace std;

int firstOccr(int arr[], int left, int right, int key)
{

    return -1;
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
    cout << "First occurance is " << firstOccr(arr, 0, n - 1, key) << ", Last occurance is " << lastOccr(arr, 0, n - 1, key) << endl;

    return 0;
}
