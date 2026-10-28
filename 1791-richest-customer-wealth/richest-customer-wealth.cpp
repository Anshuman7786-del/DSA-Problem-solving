class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {

        int m = accounts.size();
        int wealth = 0;

        for(int i = 0; i < m; i++){
            wealth = max(wealth, accumulate(accounts[i].begin(), accounts[i].end(), 0));
        }
        return wealth;
    }
};