#include <iostream>
using namespace std;
/*
Input:
The first argument given is the integer array A.
The second argument given is the integer B.

Output:
Return that minimum possible number.
*/

bool isPossibleSolution(int *A, int n, int S, int mid)
{
    int pages = 0, studentCount = 1;

    for (int i = 0; i < n; i++)
    {
        if (pages + A[i] <= mid)
            pages += A[i];

        else
        {
            studentCount++;

            if (studentCount > S || A[i] > mid)
                return 0;

            pages = A[i];
        }
        if (studentCount > S) // when books left to be allocated
            return 0;
    }
    return 1;
}

int allocateBook(int *A, int n, int S)
{
    int ans = -1;
    int left = 0, right = 0;

    // no. of student is more than no. of books
    if (S > n)
        return -1;

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