class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        int n = nums.size();
        map<int, int>mp;

        for(int i = 0; i < n; i++){
            if((nums[i] % 2) == 0){
                mp[nums[i]]++;
            }
        }
        int maxi = 0;
        for(auto it : mp){
            if(it.second > maxi){
                maxi = it.second;
            }
        }
        for(auto it : mp){
            if(it.second == maxi){
                return it.first;
            }
        }
        return -1;
    }
};