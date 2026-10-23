class Solution {
public:

    int digitSum(int num){

        int cnum = num;
        int sum = 0;
        while(cnum > 0){
            int lastDigit = cnum % 10;
            sum += lastDigit;
            cnum /= 10;
        }
        return sum;
    }

    int addDigits(int num) {
        int sum = digitSum(num);
        if(sum < 10) return sum;
        
        return addDigits(sum);
        
    }
};