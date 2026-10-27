class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxReach = 0;

        for (int i = 0; i < n; i++) {

            // If we cannot reach this index
            if (i > maxReach) {
                return false;
            }

            // Update the farthest index we can reach
            maxReach = max(maxReach, i + nums[i]);

            // If we can reach the last index
            if (maxReach >= n - 1) {
                return true;
            }
        }

        return true;
    }
};