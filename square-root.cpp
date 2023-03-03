#include <iostream>
using namespace std;

double findRoot(int n)
{
    int start = 0, end = n / 2 + 1;
    int root = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid * mid <= n)
        {
            root = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    return root;
}

int main()
{
    int n = 50;

    cout << "The Root of " << n << " is " << findRoot(n) << endl;

    return 0;
}