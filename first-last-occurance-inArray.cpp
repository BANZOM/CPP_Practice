// I/P:
// 8 2
// 0 0 1 1 2 2 2 2

// O/P:
// 4 7

#include <bits/stdc++.h>

int firstOccurance(vector<int> &arr, int n, int k) {
  int first = -1;
  int start = 0;
  int end = n-1;
  int mid = start + (end-start)/2;
  while(start<=end){
    if(arr[mid]==k) {
      first = mid;
      end = mid - 1;
    }

    else if (arr[mid]<k)
      start = mid + 1;
    
    else
      end = mid -1;
    
    mid = start + (end-start)/2;
  }
  return first;
}

int lastOccurance(vector<int> &arr, int n, int k) {
  int last = -1;
  int start = 0;
  int end = n-1;
  int mid = start + (end-start)/2;
  while(start<=end){
    if(arr[mid]==k) {
      last = mid;
      start = mid + 1;
    }

    else if (arr[mid]<k)
      start = mid + 1;
    
    else
      end = mid -1;
    
    mid = start + (end-start)/2;
  }
  return last;
}
pair<int, int> firstAndLastPosition(vector<int> &arr, int n, int k) {

  pair<int, int> p;

  p.first = firstOccurance(arr, n, k);
  p.second = lastOccurance(arr, n, k);

  return p;
}
