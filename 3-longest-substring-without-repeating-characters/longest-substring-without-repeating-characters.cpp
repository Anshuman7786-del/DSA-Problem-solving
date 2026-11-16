class Solution {
public:

  // Using 2 pointers and sliding window
    int lengthOfLongestSubstring(string s) {

        int n = s.size();

        int left = 0;
        int right = 0;

        int maxLen = 0;

        vector<int> hashArr(256, 0);

        while(right < n) {

            // If character is already present
            while(hashArr[s[right]] == 1) {

                // Remove the leftmost character
                hashArr[s[left]] = 0;

                // Shrink the window
                left++;
            }

            // Include current character
            hashArr[s[right]] = 1;

            // Calculate window length
            int len = right - left + 1;

            maxLen = max(maxLen, len);

            // Expand the window
            right++;
        }

        return maxLen;
    }

/*
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
*/
};