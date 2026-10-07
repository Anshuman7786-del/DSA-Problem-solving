class Solution {
public:

    // bool powerOf2(int i, int n){
    //     if()
    // }
    bool isPowerOfTwo(int n) {

        if( n <= 0) return false;
        double num = log2(n);
        if(num == int(num)){
            return true;
        }
        else{
            return false;
        }
    }
};