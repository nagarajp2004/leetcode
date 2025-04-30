class Solution {
public:
     void recur(vector<int>&c,int t,int i,vector<vector<int>>&ans,vector<int>&temp)
     {
        if(t==0){
            ans.push_back(temp);
            return;
        }
        if(t<0){
            return;
        }
        if(i==c.size()){
            return ;
        }
       
       recur(c,t,i+1,ans,temp);
       temp.push_back(c[i]);
       recur(c,t-c[i],i,ans,temp);
       temp.pop_back();

     }


    vector<vector<int>> combinationSum(vector<int>& c, int t) {
        vector<vector<int>>ans;
        vector<int>temp;
        int sum=0;
        recur(c,t,0,ans,temp);
        return ans;
    }
};