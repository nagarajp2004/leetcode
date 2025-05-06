class Solution {
public:
   bool recur(vector<vector<char>>&vt,string word,int i,int j,int k,int n,int m){
    if(i<0 || j<0 || i==n || j==m || vt[i][j]!=word[k]){
        return false;
    }
   char temp=vt[i][j];
   vt[i][j]='#';
   
   if(k==word.size()-1)
   return true;

   bool tempx= recur(vt,word,i+1,j,k+1,n,m)||
          recur(vt,word,i-1,j,k+1,n,m)||
          recur(vt,word,i,j-1,k+1,n,m)||
          recur(vt,word,i,j+1,k+1,n,m); 

    vt[i][j]=temp;
    return tempx;
   }


    bool exist(vector<vector<char>>& bd, string word) {
        
        int n=bd.size();
        int m=bd[0].size();
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(bd[i][j]==word[0]){
                    if(recur(bd,word,i,j,0,n,m)){
                         return true;
                    }
                }
            }
        }
        return false;
    }
};