#include <iostream>
using namespace std;

int findEquilibrium(int arr[], int n)
{
    
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