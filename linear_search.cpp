#include <iostream>
using namespace std;

bool linearSearch(int a[], int len, int key)
{
    for (int i = 0; i < len; i++)
    {
        if (a[i] == key)
        {
            return 1;
        }
    }
    return 0;
}
int main(int argc, char const *argv[])
{
    int key;
    int a[] = {1, -12, 5, 6, 7, 9, 3, 4, 99, 69, 88, 23, 45, 63, 21, 58, 56, 95, 37, 29};
    cout << "Enter the key element: ";
    cin >> key;
    bool found = linearSearch(a, 20, key);
    if (found)
        cout << "Element (" << key << ") found." << endl;
    else
        cout << "Element " << key << " is not found." << endl;
    return 0;
}
