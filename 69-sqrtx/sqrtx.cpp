class Solution {
public:
    int mySqrt(int x) {
        int sqrt = 0;
        for(long long i = 1; i*i <= x; i++){
            sqrt++;
        }
        return sqrt;
    }
};