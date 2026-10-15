class Solution {
public:
    int findDuplicate(vector<int>& nums) {

        int m = nums.size();
        sort(nums.begin(), nums.end());

        for(int i = 0; i < m-1; i++){
            if(nums[i] == nums[i+1]){
                return nums[i];
            }
        }
        return -1;
    }
};