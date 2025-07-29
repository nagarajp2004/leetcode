class Solution {
  public:
    int median(vector<vector<int>> &mat) {
        // code here
        int low=INT_MAX;
        int high=INT_MIN;
        int n=mat.size();
        int m=mat[0].size();
        
        for(int i=0;i<n;i++){
            if(mat[i][0]<low){
                low=mat[i][0];
            }
            if(mat[i][m-1]>high){
                high=mat[i][m-1];
            }
        }
        
        int nol=(n*m+1)/2;
        
        
        while(low<high){
            int mid=(low+high)/2;
            int npos=0;
            for(int i=0;i<n;i++){
                npos+=upper_bound(mat[i].begin(),mat[i].end(),mid)-mat[i].begin();
            }
            
            if(npos < nol){
                low= mid+1;
            }else{
                high=mid;
            }
        }
        return low;
    }
};
