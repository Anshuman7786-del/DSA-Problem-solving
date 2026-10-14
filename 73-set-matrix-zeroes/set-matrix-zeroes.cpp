class Solution {
public:
    // Better approach ---  Time complexity: O(mn), Space complexity: O(m+n)

void setZeroes(vector<vector<int>>& matrix){

    int m = matrix.size();    // Rows
    int n = matrix[0].size(); // Columns

    vector<int>row(m);  // Automatically initialized to 0
    vector<int>col(n);  // ,,              ,,        ,, ,,

    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(matrix[i][j] == 0){
                row[i] = 1;
                col[j] = 1;
            }
        }
    }
    
    for(int i = 0; i < m; i++){
        for(int j = 0; j < n; j++){
            if(row[i] == 1 || col[j] == 1){
                matrix[i][j] = 0;
            }
        }
    }
}
};