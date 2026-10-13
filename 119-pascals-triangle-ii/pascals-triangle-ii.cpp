class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int>getRows;

        long long ans = 1;
        getRows.push_back(1);
        for(int col = 1; col <= rowIndex; col++){
            ans = ans * (rowIndex+1 - col);
            ans = ans / col;

            getRows.push_back(ans);
        }
        return getRows;
    }
};