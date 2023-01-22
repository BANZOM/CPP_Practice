// we have an array 4 2 1 3 1, The duplicate integer value present in the array is 1. Hence, the answer is 1 in this case.
// 6 3 1 5 4 3 2, The duplicate integer value present in the array is 3. Hence, the answer is 3 in this case.
int findDuplicate(int arr[], int n) 
{
	  int a=0;    
    for(int i=0; i<n; i++)    
    {        
        a = a ^ arr[i];    
    }    
    int b = 0 ;    
    for(int i=1 ; i < n;  i++)    
    {        
        b = b ^ i;    
    }    
    int sol = a ^ b;    
    return sol; 
}
