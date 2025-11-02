class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
         int rextra=1;
         int cextra=1;
   int n=mat.size();
   int m=mat[0].size();
   int val=mat[0][0];


      for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(mat[i][j]==0){
                if(i==0){
                    rextra=0;
                }else if(j==0){
                    cextra=0;
                }
                mat[i][0]=0;
                mat[0][j]=0;
            }
        }
      }

      for(int i=1;i<n;i++){
        for(int j=1;j<m;j++){
            if(mat[i][0]==0 || mat[0][j]==0){
                mat[i][j]=0;
            }
        }
      }
      if(val==0){
        for(int i=0;i<n;i++)
           mat[i][0]=0;

        for(int j=0;j<m;j++){
            mat[0][j]=0;
        }   
      }

      if(cextra==0){
        for(int i=0;i<n;i++){
            mat[i][0]=0;
        }
      }

      if(rextra==0){
        for(int i=0;i<m;i++){
            mat[0][i]=0;
        }
      }
     


    }
};