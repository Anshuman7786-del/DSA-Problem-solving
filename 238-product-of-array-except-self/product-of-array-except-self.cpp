class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {

        int n = nums.size();

        vector<int>prefixProduct(n+1, 1);
        vector<int>suffixProduct(n+1, 1);
        vector<int>ans(n);
        
        // Build prefix product;
        for (int i = 0; i < nums.size(); i++) {
            prefixProduct[i+1] = prefixProduct[i] * nums[i];
        }
        // Build suffix product
        for (int i = n-1; i >= 0; i--) {
            suffixProduct[i] = suffixProduct[i+1] * nums[i];
        }
        // Now comes the ans

        for(int i = 0; i < n; i++){
            ans[i] = prefixProduct[i] * suffixProduct[i+1];
        }

        return ans;
    }
};