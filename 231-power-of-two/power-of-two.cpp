class Solution {
public:

    bool isPowerOfTwo(int n) {

        if(n == 1) return true;
        if(n <= 0 || n % 2 != 0) return false;
        
        return isPowerOfTwo(n/2);
    }

    // My approach ->

    // bool isPowerOfTwo(int n) {

    //     if( n <= 0) return false;
        
    //     double num = log2(n);
    //     if(num == int(num)){
    //         return true;
    //     }
    //     else{
    //         return false;
    //     }
    // }
};