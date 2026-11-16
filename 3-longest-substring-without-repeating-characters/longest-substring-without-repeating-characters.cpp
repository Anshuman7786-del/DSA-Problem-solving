class Solution {
public:

  // Brute force approach using Hashing
    int lengthOfLongestSubstring(string s) {
        int n = s.size();

        int len = 0;
        int maxLen = 0;

        for(int i = 0; i < n; i++){
            vector<int>hashArr(256, 0);
            for(int j = i; j < n; j++){
                if(hashArr[s[j]] == 1){
                    break;   
                }
                len = j - i + 1;
                maxLen = max(maxLen, len);
                hashArr[s[j]] = 1;
            }
        }
        return maxLen;
    }
};