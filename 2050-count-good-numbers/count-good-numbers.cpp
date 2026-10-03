class Solution {
public:
    
    long long MOD = 1000000007;
    long long modPower(long long base, long long exponent) {
        // This stores the running answer for the power calculation.
        long long result = 1;
 
        while (exponent > 0) {
            // If the current bit of the exponent is 1,
            // include the current base in the answer.
            if (exponent % 2 == 1) {
                result = (result * base) % MOD;
            }
 
            // Square the base so it represents the next power block.
            base = (base * base) % MOD;
 
            // Move to the next bit by cutting the exponent in half.
            exponent /= 2;
        }
 
        return result;
    }

    int countGoodNumbers(long long n) {

        long long evenPos = (n + 1) / 2;
        long long oddPos = n / 2;

        // This stores all valid ways to fill even indices.
        long long evenWays = modPower(5, evenPos);
 
        // This stores all valid ways to fill odd indices.
        long long oddWays = modPower(4, oddPos);

        return (evenWays * oddWays) % MOD;
    }

    
};