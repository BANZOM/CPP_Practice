#include <iostream>
using namespace std;

int findEquilibrium_Approach1(int arr[], int n)
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

    for (int i = 0; i < n; i++)
    {
        if (leftSum[i] == rightSum[i])
            return i;
    }

    return -1;
}

int findEquilibrium_Approach2(int arr[], int n)
{
    int totalSum = 0;
    for (int i = 0; i < n; i++)
    {
        totalSum += arr[i];
    }

    int temp = 0;

    for (int i = n - 1; i >= 0; i--)
    {
        totalSum -= arr[i];
        if (totalSum == temp)
            return i;
        temp += arr[i];
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

    cout << "The Equilibrium element index (Approach 1) is : " << findEquilibrium_Approach1(arr, n) << endl;
    cout << "The Equilibrium element index (Approach 2) is : " << findEquilibrium_Approach2(arr, n) << endl;

    return 0;
}