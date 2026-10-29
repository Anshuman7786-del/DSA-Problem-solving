class Solution {
public:
    int tribonacci(int n) {
        if(n == 0) return 0;
        else if(n == 1 || n == 2) return 1;

        int f = 0;
        int s = 1;
        int t = 1;
        int nt;    // Next term

        for(int i = 4; i <= n + 1; i++){
            nt = f + s + t;
            f = s;
            s = t;
            t = nt;
        }
        return t;
    }
};