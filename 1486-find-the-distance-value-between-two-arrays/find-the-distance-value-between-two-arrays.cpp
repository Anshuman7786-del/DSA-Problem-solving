class Solution {
public:

  // Another crazy and optimized approach using sorting, binary search and lower_bound

  int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {

        sort(arr2.begin(), arr2.end());
        int count = 0;
        // we need to check whether any element of arr2 falls between x-d and x+d
        for(int x : arr1) {
            auto it = lower_bound(arr2.begin(), arr2.end(), x - d);

            if(it == arr2.end() || *it > x + d) {
                count++;
            }
        }
        return count;
    }

/*
  // My initial code ->
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int count = 0;
        for(int i = 0; i < arr1.size(); i++){
            for(int j = 0; j < arr2.size(); j++){
                if(abs(arr1[i]-arr2[j]) <= d){
                    count++;
                    break;
                }
            }
        }
        return arr1.size() - count;
    }
*/
};