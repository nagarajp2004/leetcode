class Solution {
  public:
    bool is_safe(int i,vector<int>& color, vector<vector<int>> &adj,int col){
        for(auto v:adj[i]){
            if(i!=v && color[v]==col){
                return false;
            }
        }
        return true;
    }
    bool can_color(int i,vector<vector<int>>&adj,int m,vector<int>&color)
    {
       if(i==color.size()){
           return true;
       }               
       
       for(int col=0;col<m;col++){
           if(is_safe(i,color,adj,col)){
               color[i]=col;
               if(can_color(i+1,adj,m,color)){
                   return true;
               }
               color[i]=-1;
           }
       }
       return false;
       
    }
    bool graphColoring(int v, vector<vector<int>> &edges, int m) {
        // code here
        vector<vector<int>>adj(v);
        
        for(auto it:edges){
            adj[it[0]].push_back(it[1]);
            adj[it[1]].push_back(it[0]);
        }
        
        vector<int>color(v,-1);
        
       return can_color(0,adj,m,color);
        
    }
};