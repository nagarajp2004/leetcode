class Solution {
public:
    int totalFruit(vector<int>& f)
    {
      map<int,int>mpp;
    int i=0;
    int j=0;
    int n=f.size();
 int ans=0;
    while(j<n){
        mpp[f[j]]++;;
        while(mpp.size() > 2){
            mpp[f[i]]--;
            if(mpp[f[i]]<=0){
                mpp.erase(f[i]);
            }
            i++;
        }
ans=max(ans,j-i+1);
        j++;
    }  
    return ans;  
    }
};