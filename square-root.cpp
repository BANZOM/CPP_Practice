#include <iostream>
using namespace std;

double preciseRoot (long long int n, double root, int precision)
{
    float c = 1;
    for (int i = 1; i <= precision; i++)
    {
        c = c * 0.1;
        // cout << c << endl;
        while ((root+c)*(root+c) <= (double)n)
        {
            root = root + c;
        }
        
    }
    
    return root;
}

double findRoot(long long int n)
{
    long long int start = 0, end = n / 2 + 1;
    double root = 0;
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

    return preciseRoot(n, root, 5);  // default precision 0
}

int main()
{
    long long int n = 3;

    cout << "The Root of " << n << " is " << findRoot(n) << endl;

    return 0;
}