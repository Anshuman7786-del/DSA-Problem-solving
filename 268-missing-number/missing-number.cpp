class Solution {
public:
    int missingNumber(vector<int>& nums) {
        
        int n = nums.size();
        int S = (n*(n+1))/2;

        int arrSum = accumulate(nums.begin(), nums.end(), 0);

        return S - arrSum;
    }
};