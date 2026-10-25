class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xorAll = 0;

        // XOR all numbers
        for(int num : nums){
            xorAll ^= num;   // xorAll is xor of two diff nos.
        }                    // Thats why we will find the rightmost set bit(to know 1st different bit among 2 no)        
        
        // Find the rightmost set bit
        int mask = xorAll ^ (xorAll & (xorAll - 1));

        int num1 = 0;
        int num2 = 0;
        
        // Divide numbers into two groups
        for(int num : nums){
            if(num & mask){
                num1 ^= num;
            }
            else{
                num2 ^= num;
            }
        }
        return {num1, num2};
    }
};