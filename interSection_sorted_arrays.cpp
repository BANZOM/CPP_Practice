#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	int i=0,j=0;
	vector<int> ans;
	while(i<n && j<m){
		if(arr1[i]==arr2[j]){
			ans.push_back(arr1[i]);
			i++; j++;
		}
		else if(arr1[i]>arr2[j])
			j++;
		else i++;
	}
	return ans;
}

/*
This function will return the array that have the intersection, This is the optimize approach 
to solve array intersection;

Another costly approach is by nested loops

*/
