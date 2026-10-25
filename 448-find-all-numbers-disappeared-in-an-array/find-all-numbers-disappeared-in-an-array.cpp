class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        
        int n = nums.size();
        vector<int>found(n+1, 0);
        vector<int>ans;

        for(int x : nums){
            found[x] = 1;
        }
        for(int i = 1; i <= n; i++){
            if(found[i] == 0){
                ans.push_back(i);
            }
        }

        return ans;
    }
};