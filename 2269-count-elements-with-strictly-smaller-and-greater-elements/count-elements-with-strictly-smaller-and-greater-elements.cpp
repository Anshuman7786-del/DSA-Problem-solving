class Solution {
public:
    int countElements(vector<int>& nums) {
        if(nums.size() < 3){
            return 0;
        }
        int count = 0;
        bool stSmaller, stGreater;
        for(int i = 0; i < nums.size(); i++){
            stSmaller = false;
            stGreater = false;
            for(int j = 0; j < nums.size(); j++){
                if(nums[i] < nums[j]){
                    stGreater = true;
                }
                if(nums[i] > nums[j]){
                    stSmaller = true;
                }
            }
            if(stSmaller && stGreater){
                count++;
            }
        }
        return count;
    }
};