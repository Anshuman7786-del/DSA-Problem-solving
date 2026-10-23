class Solution {
public:

   // In O(1) runtime
    int addDigits(int num) {
        if(num == 0) return 0;
        if(num % 9 == 0) return 9;
        else{
            return num % 9;
        } 
    }

/*
 // Using loop only
    int addDigits(int num) {

        while (num >= 10) {
            int sum = 0;

            while (num > 0) {
                int lastDigit = num % 10;
                sum += lastDigit;
                num /= 10;
            }

            num = sum;
        }

        return num;
    }
 */
/*
  // Using recursion
  // Here TC is O(logn) and SC is O(logn)
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
 */
 
};