class Solution {
public:
    /*
      // Better approach ---  Time complexity: O(mn), Space complexity: O(m+n)

      void setZeroes(vector<vector<int>>& matrix) {

          int m = matrix.size();    // Rows
          int n = matrix[0].size(); // Columns

          vector<int> row(m); // Automatically initialized to 0
          vector<int> col(n); // ,,              ,,        ,, ,,

          for (int i = 0; i < m; i++) {
              for (int j = 0; j < n; j++) {
                  if (matrix[i][j] == 0) {
                      row[i] = 1;
                      col[j] = 1;
                  }
              }
          }

          for (int i = 0; i < m; i++) {
              for (int j = 0; j < n; j++) {
                  if (row[i] == 1 || col[j] == 1) {
                      matrix[i][j] = 0;
                  }
              }
          }
      }
    */

    // Optimal Approach --- Time complexity: O(mn), Space complexity: O(1)

    void setZeroes(vector<vector<int>>& matrix) {
        /* Better approach hi hai bas usme 2 seperate row[m] and col[n] matrix
         banane ki jagah ese 2Dmatrix ki 1st row aur 1st column ko check karne
         wala bna liya. || But remember the use of 'col0' kyoki aise mat[0][0]
         overlap karne lagenge isliye col[n-1] size ka hoga
        */

        int m = matrix.size();    // Rows
        int n = matrix[0].size(); // Columns
        int col0 = 1;

        // Make the 1st row and 1st col as checking matrices
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == 0) {
                    matrix[i][0] = 0; // 1st col ko change kr denge

                    if (j != 0) {
                        matrix[0][j] =
                            0; // 1st row ko chnage kr denge except 1st element
                    } else {
                        col0 = 0; // 1st Row ke 1st element ko chnage karenge
                    }
                }
            }
        }
        // Now start inserting 0's in matrix except 0th row and 0th column
        for (int i = 1; i < m; i++) {
            for (int j = 1; j < n; j++) {
                if (matrix[0][j] == 0 || matrix[i][0] == 0) {
                    matrix[i][j] = 0;
                }
            }
        }
        // 1st column chnage
        if (matrix[0][0] == 0) {
            for (int j = 0; j < n; j++)
                matrix[0][j] = 0;
        }
        // 1st row change
        if (col0 == 0) {
            for (int i = 0; i < m; i++)
                matrix[i][0] = 0;
        }
    }
};
