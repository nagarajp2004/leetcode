class Solution {
public:
   bool check(vector<string>&board,int row,int col,int n)
   {
         int i=row,j=col;
         while(row>-1 && col>-1){
            if(board[row][col]=='Q'){
                return false;
            }
            row--,col--;
         }



         while(i>-1 && j<n){
             if(board[i][j]=='Q'){
                return false;
                
             }
             i--,j++;
         }
         return true;
   }
 

void f(int row,int n,vector<vector<string>>&ans,vector<string>board,vector<int>col){
    
     if(row==n){
    ans.push_back(board);
   return;
     }
        for(int j=0;j<n;j++)
        {
          if(col[j]==0 && check(board,row,j,n)){
                board[row][j]='Q';
                col[j]=1;
                f(row+1,n,ans,board,col); 
                board[row][j]='.';
                col[j]=0;    
          }
        }
    } 

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>st(n);
    for(int i=0;i<n;i++)
    for(int j=0;j<n;j++)
        st[i].push_back('.');
      

        vector<int>col(n,0);
        f(0,n,ans,st,col);
        return ans;
    }
};