class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {

        int m = s.size();
        int n = g.size();

        sort(g.begin(), g.end());
        sort(s.begin(), s.end());

        int l = 0;
        int r = 0;

        while(l < m && r < n){
            if(g[r] <= s[l]){
                r++;
            }
            l++;
        }
        return r;
    }
};