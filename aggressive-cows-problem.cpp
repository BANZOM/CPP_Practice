#include <iostream>
#include <bits/stdc++.h>
using namespace std;
/*
Input:
The first argument given is the integer array A. that is the position of stall.
The second argument given is the integer B. that is the number of cows.

Output:
Return that minimum distance between any two cows is maximum
*/

bool isPossible(int *A, int n, int C, int mid)
{
    int cowsCount = 1, pos = A[0];

    for (int i = 0; i < n; i++)
    {
        if (A[i] - pos >= mid)
        {
            cowsCount++;

            if(cowsCount == C)
                return true;
            
            pos = A[i];
        }
    }

    return false;
}
int aggressiveCows(int *A, int n, int C)
{
    int ans = -1;

    // sort the array of stalls
    sort(A, A + n);

    int start = 0, end = A[n - 1];

    // binary loop logic
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (isPossible(A, n, C, mid))
        {
            ans = mid;
            start = mid + 1;
        }
        else
            end = mid - 1;
    }

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