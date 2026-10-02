class Solution {
public:
    
    vector<string>ans;

    void generate(string current, int open, int close, int n){

        if(current.size() == 2 * n){
            ans.push_back(current);
            return;
        }

        if(open < n){
            generate(current + '(', open + 1, close, n);
        }
        if(close < open){
            generate(current + ')', open, close + 1, n);
        }
    }   


    vector<string> generateParenthesis(int n) {
        generate("", 0, 0, n);
        return ans;
    }
};