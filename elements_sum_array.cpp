#include <iostream>
using namespace std;
int printSum(int a[], int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += a[i];
    }

    return sum;
}
int main(int argc, char const *argv[])
{
    int len, arr[100];
    cin >> len;

    // read array
    for (int i = 0; i < len; i++)
    {
        cin >> arr[i];
    }

    cout << "The Sum of elements is: " << printSum(arr, len) << endl;

    return 0;
}