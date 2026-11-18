class Solution {
public:
    // Using 2 pointers and sliding window

    int longestOnes(vector<int>& nums, int k) {

        int l = 0;
        int r = 0;
        int zeros = 0;
        int len = 0;
        int maxlen = 0;
        while(r < nums.size()){
            if(nums[r] == 0) zeros++;
            while(zeros > k){
                if(nums[l] == 0) zeros--;
                l++;
            }
            if(zeros <= k){
                len = r - l + 1;
                maxlen = max(maxlen, len);
            }
            r++;
        }
        return maxlen;
    }
    /*
     // Brute force approach
        int longestOnes(vector<int>& nums, int k) {
            int n = nums.size();
            int zeros;
            int len;
            int maxlen = 0;

            for(int i = 0; i < n; i++){
                zeros = 0;
                for(int j = i; j < n; j++){
                    if(nums[j] == 0) zeros++;
                    if(zeros <= k){
                        len = j - i + 1;
                        maxlen = max(maxlen, len);
                    }
                }
            }
            return maxlen;
        }
    */
};