/*
Dutch Flag Algorithm:
Input: 0 1 2 2 1 0
output: 0 0 1 1 2 2
*/

#include <bits/stdc++.h> 
void sort012(int *arr, int n)
{
   int left = 0, right = n-1, mid = 0;
   while(mid<=right){
      if(arr[mid] == 0){
         arr[mid] = arr[left];
         arr[left] = 0;
         left++;
         mid++;
      }
      else if (arr[mid]==1)
         mid++;
      else if (arr[mid] == 2){
         arr[mid] = arr[right];
         arr[right] = 2;
         right--;
      }
   }
}

