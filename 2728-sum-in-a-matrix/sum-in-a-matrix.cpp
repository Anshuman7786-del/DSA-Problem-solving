class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int score = 0;
        vector<int>check;

        int n = nums[0].size();
        while(n > 0){
            for(int i = 0; i < nums.size(); i++){

                int m = *max_element(nums[i].begin(), nums[i].end());
                check.push_back(m);

                auto it = max_element(nums[i].begin(), nums[i].end());
                nums[i].erase(it);
                
            }
            score += *max_element(check.begin(), check.end());
            check.clear();

            n--;
        }
        
        
        return score;
    }
};