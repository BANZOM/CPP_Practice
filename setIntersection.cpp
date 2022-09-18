#include <iostream>
using namespace std;

void printIntersection(int arr1[], int arr2[], int m, int n)
{
    int i = 0, j = 0;
    while (i < m && j < n)
    {
        if (arr1[i] < arr2[j])
            i++;
        else if (arr2[j] < arr1[i])
            j++;
        else /* if arr1[i] == arr2[j] */
        {
            cout << arr2[j] << " ";
            i++;
            j++;
        }
    }
}

int main()
{
    // find the intersection of two arrays in c language
    int s1, s2;
    cout << "Enter the number of elements in first set: ";
    cin >> s1;
    cout << "Enter the number of elements in second set: ";
    cin >> s2;

    int A[s1], B[s2];

    cout << "Enter the elements: ";
    // input for set A
    for (int i = 0; i < s1; i++)
    {
        cin >> A[i];
    }

    cout << "Enter the elements: ";
    // input for set B
    for (int i = 0; i < s2; i++)
    {
        cin >> B[i];
    }

    printIntersection(A, B, s1, s2);
    return 0;
}