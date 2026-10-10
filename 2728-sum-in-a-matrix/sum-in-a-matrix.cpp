class Solution {
public:

    // My previous approach

    /*
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
*/

    int matrixSum(vector<vector<int>>& nums) {
        int n = nums[0].size(); // Column

        for(int i = 0; i < nums.size(); i++){
            sort(nums[i].begin(), nums[i].end());
        }

    // After sorting, the answer is the summation of the highest element from each column
        int score = 0;

        for(int col = 0; col < n; col++){
            int maxi = INT_MIN;
            for(int i = 0; i < nums.size(); i++){
                maxi = max(maxi, nums[i][col]);
            }
            score += maxi;
        }
        return score;
    }
};