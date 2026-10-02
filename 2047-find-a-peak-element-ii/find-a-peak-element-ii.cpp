class Solution {
public:
// Instead of searching the entire 2D matrix, we perform binary search on columns.

    vector<int> findPeakGrid(vector<vector<int>>& mat) {

        int m = mat.size();      // Rows
        int n = mat[0].size();   // Columns

        int low = 0;
        int high = n - 1;

        while (low <= high) {

            int mid = low + (high - low) / 2;

            // Find the maximum element in the middle column
            int maxRow = 0;

            for (int i = 1; i < m; i++) {
                if (mat[i][mid] > mat[maxRow][mid]) {
                    maxRow = i;
                }
            }

            int current = mat[maxRow][mid];

            // Boundary values are considered -1
            int left = (mid == 0) ? -1 : mat[maxRow][mid - 1];
            int right = (mid == n - 1) ? -1 : mat[maxRow][mid + 1];

            // Peak found
            if (current > left && current > right) {
                return {maxRow, mid};
            }

            // Right neighbor is bigger
            if (right > current) {
                low = mid + 1;
            }

            // Left neighbor is bigger
            else {
                high = mid - 1;
            }
        }

        return {-1, -1};
    }
};