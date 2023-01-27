// I/P:
// 8 2
// 0 0 1 1 2 2 2 2

// O/P:
// 4 7

#include <bits/stdc++.h>
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {
  int low = 0, high = n - 1;
  int x = -1, y = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == k) {
      x = mid;
      high = mid - 1;
    } else if (k > arr[mid])
      low = mid + 1;
    else
      high = mid - 1;
  }

  //   for (int i = x; i < n; i++) {
  //     if (arr[i] != k)
  //       break;
  //     y = i;
  //   }
  low = 0, high = n - 1;
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (arr[mid] == k) {
      y = mid;
      low = mid + 1;
    } else if (k > arr[mid])
      low = mid + 1;
    else
      high = mid - 1;
  }

  return make_pair(x, y);
}
