class Solution {
public:

  // Optimized approach -> O(n)
    // suffix maximum (or right-to-left traversal)
    // Maintain the max element encountered while traversing from right to left
    vector<int> replaceElements(vector<int>& arr){

        int n = arr.size();
        int maxi = -1;
        for(int i = n - 1; i >= 0; i--){
            int current = arr[i];
            arr[i] = maxi;
            maxi = max(maxi, current);
        }
        return arr;
    }

/*
  // My first approach -> O(n^2)
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        int maxi;
        for(int i = 0; i < n - 1; i++){
            int maxi = INT_MIN;
            for(int j = i + 1; j < n; j++){
                maxi = max(maxi, arr[j]);
            }
            arr[i] = maxi;
        }
        arr[n-1] = -1;
        return arr;
    }
*/
};