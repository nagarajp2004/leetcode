class Solution {
public:
    void f(int r,int c,queue<pair<int,int>>&q,vector<vector<int>>& g){

      vector<int>ra={-1,1,0,0};
      vector<int>ca={0,0,-1,1};

      for(int i=0;i<4;i++){
        int row=r+ra[i];
        int col=c+ca[i];
        if(row >=0 && row <g.size() && col >=0 && col <g[row].size() && g[row][col]==1){
            q.push({row,col});
            g[row][col]=-1;
        }
      }

    }
    int orangesRotting(vector<vector<int>>& g) {
        queue<pair<int,int>>q;
        
        for(int i=0;i<g.size();i++){
            for(int j=0;j<g[i].size();j++){
                if(g[i][j]==2){
                   q.push({i,j});
                   g[i][j]=0;
                }
            }
        }

   int count=0;

   while(!q.empty()){

     int n=q.size();
     for(int i=0;i<n;i++){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        f(r,c,q,g); 
     }  
     count++;

   }
  for(int i=0;i<g.size();i++){
    for(int j=0;j<g[i].size();j++){
        if(g[i][j]==1){
            return -1;
        }
    }
  }

 
  return count==0 ?0:count-1;
    }
};