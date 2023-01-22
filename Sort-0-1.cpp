/*
Input: 
12
0 1 1 0 0 1 1 0 1 0 0 0
OUTPUT: 0 0 0 0 0 0 0 1 1 1 1 1


*/
#include <iostream>
using namespace std;

void sortThis(int arr[], int n)
{
    int i=0, j=n-1;
    while (i<j){
        if(arr[i] == 0)
            i++;
        if(arr[j] == 1)
            j--;
        if(arr[i] > arr[j]){
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            i++;
            j--;
        }
    }
}

int main()
{
    int arr[100], n;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    // 2 pointer approach to sort this.
    sortThis(arr, n);

    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
