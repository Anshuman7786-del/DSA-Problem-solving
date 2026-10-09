class Solution {
public:
   
    vector<vector<int>>ans;
    void permutationCal(vector<int>&nums, vector<int>&ds, vector<bool>&used){
       if(ds.size() == nums.size()){
        ans.push_back(ds);
        return;
       }

       for(int i = 0; i < nums.size(); i++){
        if(used[i]){
            continue;
        }

        ds.push_back(nums[i]);
        used[i] = true;

        // Recursively build the remaining positions
        permutationCal(nums, ds, used);

        // Backtrack: undo the choice
        ds.pop_back();
        used[i] = false;
       }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int>ds;
        vector<bool>used(nums.size(), false);

        permutationCal(nums, ds, used);
        return ans;
    }
};