class Solution {
public:
    int subtractProductAndSum(int n) {
        int product = 1;
        int sum = 0;

        int copy = n;
        while(copy > 0){
            int lastDigit = copy % 10;
            sum += lastDigit;
            product *= lastDigit;

            copy /= 10;
        }
        return product - sum;
    }
};