class Solution {
public:
    // Optimal Approach
/*See, in this approach we will solve this on the fact that in normal sorted arr with 2 same elements
  the first one begins with the even index and ends with the odd index. Ex -> {2, 2, 3, 3, 4, 4}
  But when any anomaly is added, this pattern is broken.                                                                                       
*/ 
int singleNonDuplicate(vector<int>& nums){

    int n = nums.size();
    if(n == 1) return nums[0];
    
    if(nums[0] != nums[1]){
        return nums[0];
    }
    if(nums[n-1] != nums[n-2]){
        return nums[n-1];
    }
    
    // Initialize binary search bounds (exclude first and last index)
    int low = 1;
    int high = n - 2;

    while (low <= high) {
        // Calculate middle index
        int mid = (low + high) / 2;

        // Check if middle element is the unique one
        if (nums[mid] != nums[mid + 1] && nums[mid] != nums[mid - 1]) {
            return nums[mid];
        }

        // If mid is in the left half (pairing is valid)
        if ((mid % 2 == 1 && nums[mid] == nums[mid - 1]) ||
            (mid % 2 == 0 && nums[mid] == nums[mid + 1])) {
            // Move to the right half
            low = mid + 1;
        }
        // If mid is in the right half (pairing broken earlier)
        else {
            // Move to the left half
            high = mid - 1;
        }
    }
    return -1;
}
};