// Given an array of integers arr, return true if the number of occurrences of each value in the array is unique or false otherwise.

// arr = [1,2,2,1,1,3]
// The value 1 has 3 occurrences, 2 has 2 and 3 has 1. No two values have the same number of occurrences.

// This is the function copied from leetcode codeeditor
class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        
        unordered_map<int,int> mp;  // for map
        unordered_set<int> set;  // for set

        for(auto num:arr)
            mp[num]++;  // storing the frequencies
        
        for(auto it:mp){
            int freq = it.second;
            set.insert(freq);  // storing the count in a set
        }
        
        return mp.size() == set.size() ;  // if set size is equal to map size then it means no two values have the same number of occurrences.

    }
};
