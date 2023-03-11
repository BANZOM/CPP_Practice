#include <iostream>
using namespace std;
/*
Input:
The first argument given is the integer array A. that is the position of stall.
The second argument given is the integer B. that is the number of cows.

Output:
Return that minimum distance between any two cows is maximum
*/

int aggressiveCows(int *A, int n, int C)
{
    int ans = -1;
    return ans;
}

int main()
{
    int A[100];
    int n, C;

    cin >> n >> C;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Answer = " << aggressiveCows(A, n, C) << endl;

    return 0;
}