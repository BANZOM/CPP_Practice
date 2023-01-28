// Input: arr = [0,1,0]
// Output: 1

// C++ function to return that peak index:


int peakIndexInMountainArray(vector<int>& arr) {
        int start = 0;
        int end = arr.size()-1;
        int ans = 0;
        int mid = start + (end-start)/2;

        while(start<end){
            if(arr[mid] < arr[mid+1])
                start=mid+1;
            else if(arr[mid] > arr[mid+1])
                end = mid;
            mid = start + (end-start)/2;
        }

        return mid;
    }
