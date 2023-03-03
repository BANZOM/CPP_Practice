#include <iostream>
using namespace std;

// preciseRoot -> Give precise value
double preciseRoot (long long int n, double root, int precision)
{
    float c = 1;
    for (int i = 1; i <= precision; i++)
    {
        c = c * 0.1;
        // cout << c << endl;
        while ((root+c) <= ((double)n)/(root+c))
        {
            root = root + c;
        }
        
    }
    
    return root;
}

// findRoot -> Gives floor value
double findRoot(long long int n)
{
    long long int start = 0, end = n / 2 + 1;
    double root = 0;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (mid <= n/mid)
        {
            root = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

    return preciseRoot(n, root, 5);  // default precision 0
}

int main()
{
    long long int n = 10;

    cout << "The Root of " << n << " is " << findRoot(n) << endl;

    return 0;
}