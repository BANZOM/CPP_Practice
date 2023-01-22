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
	
	vector<vector<int>> answer; // store answers
	
	for(int i=0; i<n; i++){
		int left = i+1, right = n-1;
		
		while(left<right){
			if( arr[i]+arr[left]+arr[right] == K ){
				answer.push_back({arr[i],arr[left],arr[right]});
			
				while(arr[left] == arr[left+1] && left<right)
					left++;
			
				while(arr[right] == arr[right-1] && left<right)
					right--;
			}
			else if ( arr[i]+arr[left]+arr[right] < K)
				left++;
			else
				right--;
		}
		
		while(arr[i] == arr[i+1] && i+1<n)
			i++;
	}

	return answer;
}
