class Solution {
public:

    string largestNumber(vector<int>& nums) {

        vector<string> arr;

        for(int i = 0; i < nums.size(); i++) {
            arr.push_back(to_string(nums[i]));
        }
        
        // Custom sorting using comparators
        sort(arr.begin(), arr.end(), [](string a, string b) {
            return a + b > b + a;
        });

        if(arr[0] == "0") {
            return "0";
        }

        string ans = "";

        for(int i = 0; i < arr.size(); i++) {
            ans += arr[i];
        }

        return ans;
    }
};