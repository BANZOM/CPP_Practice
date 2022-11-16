#include <iostream>
using namespace std;

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
void readArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
}

void printArray(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void selectionSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int minIndex = i;
        for (int j = i+1; j < n; j++)
        {
            if (a[j] < a[minIndex])
            {
                minIndex = j;
            }
        }

        swap(&a[i], &a[minIndex]);
    }
}

int main(int argc, char const *argv[])
{
    int n;
    cout << "Enter the no. of elements : ";
    cin >> n;

    int a[n];
    cout << "Enter the elements : ";
    readArray(a, n);

    cout << "Before Sorting : ";
    printArray(a, n);

    // Selection Sort calling
    selectionSort(a, n);

    cout << "After Selection Sort : ";
    printArray(a, n);

    return 0;
}
