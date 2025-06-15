class Solution {
public:
    vector<vector<int>> generate(int nr) {
       int n=nr;;
        vector<vector<int>>vt(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                     vt[i].push_back(1);
                }else{
                   vt[i].push_back(vt[i-1][j-1]+vt[i-1][j]);
                }
            }
        }
        return vt;
    }
};