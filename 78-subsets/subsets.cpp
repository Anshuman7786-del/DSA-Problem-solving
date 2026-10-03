class Solution {
public:

    vector<vector<int>>res;
    void result(vector <int> &nums, vector<int>& ans, int i){
        if(i == nums.size()){
            res.push_back(ans);
            return;
        }

        // Include 
        ans.push_back(nums[i]);
        result(nums, ans, i+1);

        // Exclude
        ans.pop_back();
        result(nums, ans, i+1);
    }
    vector<int> ans;
    vector<vector<int>> subsets(vector<int>& nums) {

        result(nums, ans, 0);
        return res;
    }
};