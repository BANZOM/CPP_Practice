#include <iostream>
using namespace std;
/*
Input:
The first argument given is the integer array A.
The second argument given is the integer B.

Output:
Return that minimum possible number.
*/

int isPossibleSolution(int *A, int n, int S, int mid)
{
}

int allocateBook(int *A, int n, int S)
{
    int ans = -1;
    int left = 0, right = 0;

    for (int i = 0; i < n; i++)
        right += A[i]; // this is the search space

    while (left <= right)
    {
        int mid = left + (right - left) / 2;
        if (isPossibleSolution(A, n, S, mid))
        {
            ans = mid;
            right = mid - 1;
        }
        else
            left = mid + 1;
    }

    return ans;
}

int main()
{
    int A[100];
    int n, S;

    cin >> n >> S;
    for (int i = 0; i < n; i++)
    {
        cin >> A[i];
    }

    cout << "Answer = " << allocateBook(A, n, S) << endl;
}