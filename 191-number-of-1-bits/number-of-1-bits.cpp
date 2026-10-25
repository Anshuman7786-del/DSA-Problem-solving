class Solution {
public:
    // Without bit manipulation
  /*
    int hammingWeight(int n) {
        int count = 0;
        while(n > 1){
            if(n % 2 == 1) count++;
            n /= 2;
        }
        if(n == 1) count++;
        return count;
    }
  */
    // Using bit manipulation
    int hammingWeight(int n) {
        int count = 0;

        while (n > 0) {
            if(n & 1) {
                count++;
            }
            n = n >> 1;
        }
        return count;
    }
};