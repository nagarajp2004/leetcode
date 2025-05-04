class Solution {
public:
    int candy(vector<int>& r)
    {
        int n=r.size();
        vector<int>vt(n,1);
        for(int i=1;i<n;i++){
           if(r[i]>r[i-1]){
              vt[i]=vt[i-1]+1;
           }
        }
        for(int i=n-2;i>=0;i--){
           if(r[i]>r[i+1]){
            vt[i]=max(vt[i],vt[i+1]+1);
           }
        }
        return accumulate(vt.begin(),vt.end(),0);
    }
};