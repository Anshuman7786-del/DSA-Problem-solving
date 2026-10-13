class Solution {
public:
    int missingNumber(vector<int>& nums) {

        int n = nums.size();
        sort(nums.begin(), nums.end());
        int missingNo;
        if(nums[0] == 1) return 0;
        if(nums[n-1] == n-1) return n;

        for(int i = 0; i < n - 1; i++){
            if(nums[i] != nums[i+1] - 1){
                missingNo =  nums[i+1] - 1;
            }
        }
        return missingNo;
    }
};