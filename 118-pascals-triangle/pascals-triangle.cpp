class Solution {
public:
   // Agar sirf kisi row ke kisi column ka element pucha hai to simply ye formula lga do -> r-1Cc-1
    vector<int>generateRow(int row){
        long long ans = 1;
        vector<int>ansRow;
        ansRow.push_back(1);

        for(int col = 1; col < row; col++){      // Observation se kra
            ans = ans * (row - col);
            ans = ans / col;

            ansRow.push_back(ans);
        }
        return ansRow;
    }

    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>pascalTri;
        for(int i = 1; i <= numRows; i++){
            pascalTri.push_back(generateRow(i));
        }
        return pascalTri;
    }
};