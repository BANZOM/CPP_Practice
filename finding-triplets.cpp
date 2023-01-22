// Finding triplets
/*
Sample Input:
1
5
10 5 5 5 2
12

Sample Output:
5 5 2

Explanation:
5 5 2 is the only triplet that adds up to 15. Note that the order of the output doesn’t matter, so 5 2 5 or 2 5 5 is also acceptable.
*/

#include <bits/stdc++.h> 
vector<vector<int>> findTriplets(vector<int>arr, int n, int K) {
	
	sort(arr.begin(), arr.end());  // sorting the array to make it easy to implement 2 pointer approach
}
