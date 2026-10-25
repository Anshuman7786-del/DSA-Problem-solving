class Solution {
public:
    int minBitFlips(int start, int goal) {
        // First do xor of start and goal
        // Then count the number of set bits in the xor ans

        int ans = start ^ goal;
        int count = 0;

        while(ans > 0){
            if(ans & 1) count++;
            ans = ans >> 1;
        }
        return count;
    }
};