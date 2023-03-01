#include <iostream>
using namespace std;

int findEquilibrium(int arr[], int n)
{
    int leftSum[n], rightSum[n];
    int temp = 0;

    for (int i = 0; i < n; i++)
    {
        leftSum[i] = temp;
        temp += arr[i];
    }

    temp = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        rightSum[i] = temp;
        temp += arr[i];
    }

    for(int i=0; i<n; i++)
    {
        if(leftSum[i] == rightSum[i])
            return i;
    }

    return -1;
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

    cout << "The Equilibrium element index is : " << findEquilibrium(arr, n) << endl;
    return 0;
}