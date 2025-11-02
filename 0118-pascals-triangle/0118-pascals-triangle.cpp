class Solution {
public:
    vector<vector<int>> generate(int nr) {
    
    vector<vector<int>>ans(nr);
    

    for(int i=1;i<=nr;i++){
       
       for(int j=0;j<i;j++){
          if(j==0 || j==i-1){
            ans[i-1].push_back(1);
          }else{
         
             ans[i-1].push_back(ans[i-2][j]+ans[i-2][j-1]);
          }
       }
    }
    return ans;
    
    }
};