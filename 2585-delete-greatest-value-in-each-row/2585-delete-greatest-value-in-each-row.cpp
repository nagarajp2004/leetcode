class Solution {
public:
    int deleteGreatestValue(vector<vector<int>>& grid) {
        
        for(auto& i:grid){
            sort(i.begin(),i.end());
        }

    
  
      int m=grid[0].size();
      int ans=0;

for(int i=0;i<m;i++)
{
      int x=0;
      for(int j=0;j<grid.size();j++){
          x=max(x,grid[j][i]);
      }

      ans+=x;
}
return ans;
    }
};