// Given an array of integers nums, calculate the pivot index of this array.
// Return the leftmost pivot index. If no such index exists, return -1.

// Input: nums = [1,7,3,6,5,6]
// Output: 3
// Explanation:
// The pivot index is 3.
// Left sum = nums[0] + nums[1] + nums[2] = 1 + 7 + 3 = 11
// Right sum = nums[4] + nums[5] = 5 + 6 = 11

// Input: nums = [1,2,3]
// Output: -1
// Explanation:
// There is no index that satisfies the conditions in the problem statement.

class Solution {
public:
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
};
