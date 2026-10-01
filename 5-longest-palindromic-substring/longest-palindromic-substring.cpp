class Solution {
public:

// Used DP here

    bool checkPalindrome(string &s, int left, int right,
                         vector<vector<int>>& dp) {

        if (left >= right)
            return true;

        if (dp[left][right] != -1)
            return dp[left][right];

        if (s[left] != s[right])
            return dp[left][right] = false;

        return dp[left][right] =
            checkPalindrome(s, left + 1, right - 1, dp);
    }

    string longestPalindrome(string s) {

        int n = s.size();
        int sp = 0;     // Starting position
        int size = 1;

        vector<vector<int>> dp(n, vector<int>(n, -1));

        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {

                if (checkPalindrome(s, i, j, dp)) {

                    if (j - i + 1 > size) {
                        size = j - i + 1;
                        sp = i;
                    }
                }
            }
        }

        return s.substr(sp, size);
    }
};