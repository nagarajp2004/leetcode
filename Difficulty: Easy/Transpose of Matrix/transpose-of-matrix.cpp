class Solution {
  public:
    // Function to find transpose of a matrix.
    void transpose(vector<vector<int>>& mat, int n) {
        // code here
        
        
        for(int i=0;i<n-1;i++){
            for(int j=1+i;j<n;j++){
                swap(mat[i][j],mat[j][i]);
            }
        }
    }
};