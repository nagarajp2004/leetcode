class Solution {
 public:
     void recur(vector<int>&c,int tar,int i,vector<vector<int>>&vt,vector<int>temp){
       if(tar==0){
        vt.push_back(temp);
        return;
       }

       for(int j=i;j<c.size();j++)
       {
           if(j>i && c[j]==c[j-1]) continue;
            if(c[i]>tar) break;   
           temp.push_back(c[j]);
           recur(c,tar-c[j],j+1,vt,temp);
           temp.pop_back();
       }
     }

    vector<vector<int>> combinationSum2(vector<int>& c, int t) {
        vector<vector<int>>vt;
        sort(c.begin(),c.end());
        vector<int>temp;
        recur(c,t,0,vt,temp);
        return vt;
    }
};