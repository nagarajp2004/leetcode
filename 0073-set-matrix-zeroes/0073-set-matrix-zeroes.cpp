class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        








   int n = mat.size();              // number of rows
    int m = mat[0].size();           // number of columns

    vector<int> rows(n, 0);
    vector<int> cols(m, 0);

    // First pass: mark the rows and columns to be zeroed
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (mat[i][j] == 0) {
                rows[i] = 1;
                cols[j] = 1;
            }
        }
    }

    // Second pass: zero out marked rows and columns
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (rows[i] == 1 || cols[j] == 1) {
                mat[i][j] = 0;
            }
        }
    }
}















    
};