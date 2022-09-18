#include <iostream>
using namespace std;
void printfabonacci(int n);

// 0 1 1 2 3 5 8 13 ....
int main()
{
    int n;
    cout << "Enter the number of terms in series: ";
    cin >> n;

    printfabonacci(n);

    return 0;
}
void printfabonacci(int n)
{
    if (n == 1)
        cout << "0" << endl;
    else if (n == 2)
        cout << "0 1" << endl;
    else
    {
        int n1 = 0, n2 = 1, fab = 0;
        cout << "0 1 ";
        for (int i = 3; i <= n; i++)
        {

            fab = n1 + n2;
            cout << fab << " ";
            n1 = n2;
            n2 = fab;
        }
    }
}