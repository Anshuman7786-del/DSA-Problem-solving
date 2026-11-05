class Solution {
public:

// Optimized approach
   int countElements(vector<int>& nums){

    int mini = *min_element(nums.begin(), nums.end());
    int maxi = *max_element(nums.begin(), nums.end());

    int count = 0;
    for(int x : nums){
        if(x < maxi && x > mini){
            count++;
        }
    }
    return count;
   }

  // My initial code
/*
    int countElements(vector<int>& nums) {
        if(nums.size() < 3){
            return 0;
        }
        int count = 0;
        bool stSmaller, stGreater;
        for(int i = 0; i < nums.size(); i++){
            stSmaller = false;
            stGreater = false;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] < nums[j]){
                    stGreater = true;
                }
                if(nums[i] > nums[j]){
                    stSmaller = true;
                }
            }
            if(stSmaller && stGreater){
                count++;
            }
        }
        return count;
    }
*/
};