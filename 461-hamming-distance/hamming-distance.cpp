class Solution {
public:
    int hammingDistance(int x, int y) {
        
        // Do xor of x and y
        // Then count the no. of set bits in ans

        int ans = x ^ y;
        int count = 0;

        // Check no. of set bits in ans

        while(ans > 0){
            if(ans & 1) count++;
            ans = ans >> 1;      // ans /= 2;
        }
        return count;
    }
};