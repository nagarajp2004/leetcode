class Solution {
public:
    bool check_for_diag(vector<string>&s,int i,int j){
      
       int x=i,y=j;
        while(i>=0 && j>=0){
             if(s[i][j]=='Q'){
                return false;
             }
             i--;
             j--;
        }
        i=x;
        j=y;
           while(i>=0 && j<s.size()){
             if(s[i][j]=='Q'){
                return false;
             }
             i--;
             j++;
        }

        return true;
    }
    void recur(int i,vector<int>&col,vector<string>&board,vector<vector<string>>&sol,int n)
    {
        if(i>=n){
            sol.push_back(board);
            return;
        }
        for(int j=0;j<n;j++){
             if(col[j]==-1 && check_for_diag(board,i,j)){
                 col[j]=1;
                 board[i][j]='Q';
                 recur(i+1,col,board,sol,n);
                 board[i][j]='.';
                 col[j]=-1;
             }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
   vector<string> board(n, string(n, '.'));

        vector<int>col(n,-1);
        vector<vector<string>>sol;
        recur(0,col,board,sol,n);
        return sol;
    
    }
};