class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& p) {
        sort(p.begin(),p.end(),[](vector<int>& a,vector<int>&b){
            return a[1]<b[1];
        });
        int n=p.size();
        int count=1;
     vector<int>ans={p[0]};
     for(int i=1;i<n;i++){
        if(ans.back()>= p[i][0]){

        }else{
            ans[1]=p[i][1];
            count++;
        }
     }
     return count;
    }
};