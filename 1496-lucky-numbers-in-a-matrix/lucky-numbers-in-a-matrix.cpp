class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        // Row minimums
        vector<int> rowmin;
        for (int i = 0; i < m; i++) {
            int rmin = INT_MAX;
            for (int j = 0; j < n; j++) {
                rmin = min(rmin, matrix[i][j]);
            }
            rowmin.push_back(rmin);
        }

        // Column maximums
        vector<int> colmax;
        for (int j = 0; j < n; j++) {
            int cmax = INT_MIN;
            for (int i = 0; i < m; i++) {
                cmax = max(cmax, matrix[i][j]);
            }
            colmax.push_back(cmax);
        }

        // Collect lucky numbers
        vector<int> ln;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (matrix[i][j] == rowmin[i] && matrix[i][j] == colmax[j]) {
                    ln.push_back(matrix[i][j]);
                }
            }
        }
        return ln;
    }
};
