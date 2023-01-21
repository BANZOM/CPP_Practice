// Given an array of size N, in which N-1 elements are unique started from 1 to N-1;
// e.g. A[5] = {1 , 2 , 3 , 4, 3} ; here, answer is 3
 
// Its a function that will return the duplicate element in array of unique elements
int findDuplicate(vector<int> &arr) 
{
    // Write your code here
	int a=0;    
    for(int i=0;i<arr.size();i++)    
    {        
        a = a^arr[i];    
    }    
    int ans = 0 ;    
    for(int i=1 ; i < arr.size()  ;  i++)    
    {        
        a = a ^ i;    
    }    
       
    return a; 
}
