class Solution {
public:

    // Function to find the single number using the bit counting approach
    int singleNumber(vector<int>& nums) {
        int result = 0;

        // Iterate through all 32 bits of an integer
        for(int i = 0; i < 32; i++){
            int sum = 0;

            // Count how many numbers have the i-th bit set
            for(int num : nums){
                if((num >> i) & 1){
                    sum++;
                }
            }

            // If the sum is not a multiple of 3, the unique number has this bit set **--IMPORTANT LINE--**
            if((sum % 3) != 0){
                result = result | (1 << i);
            }
        }
        return result;
    }
};