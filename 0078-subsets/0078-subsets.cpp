class Solution {
public:

void recur(vector<vector<int>>&ans,vector<int>temp,vector<int>vt,int n,int i)
{
    if(i==n){
        ans.push_back(temp);
        return ;
    }
    //taking
    recur(ans,temp,vt,n,i+1);
    temp.push_back(vt[i]);
    recur(ans,temp,vt,n,i+1);
}

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int n=nums.size();
 recur(ans,temp,nums,n,0);
 return ans;
        // int size=nums.size();
        // int subsize=(1<<size);
        // vector<vector<int>>ans;
        // for(int i=0;i<subsize;i++){
        //     vector<int>temp;
        //     for(int j=0;j<size;j++){
        //         if(i&(1<<j)){
        //             temp.push_back(nums[j]);
        //         }
        //     }
        //     ans.push_back(temp);
        // }
        return ans;
    }
};