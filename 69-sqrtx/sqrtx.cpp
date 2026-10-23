class Solution {
public:
  // Using Binary search
    int mySqrt(int x) {
    int low = 1, high = x;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (mid < x / mid) {
            low = mid + 1;
        } 
        else if(mid > x / mid){
            high = mid - 1;
        }
        else{
            return mid;
        }
    }

    return high;
}
    
 /*
  // My approach -> Time Complexity = O(√x)
    int mySqrt(int x) {
        int sqrt = 0;
        for(long long i = 1; i*i <= x; i++){
            sqrt++;
        }
        return sqrt;
    }
 */
};