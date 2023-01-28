// Input: arr = [0,1,0]
// Output: 1

// C++ function to return that peak index:


    int pivotIndex(vector<int>& nums) {
        int len = nums.size();
        if(len==0){
            return -1;
        }        
        int totalSum=0,leftSum=0;

        for(int i=0; i<len;i++)
            totalSum+=nums[i];
        
        for(int i=0; i<len; i++){
            if(leftSum==(totalSum-nums[i]))
                return i;
            else{
                leftSum+=nums[i];
                totalSum-=nums[i];
            }
        }
        return -1;
    }
