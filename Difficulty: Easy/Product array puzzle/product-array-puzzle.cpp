// User function template for C++

class Solution {
  public:
    vector<int> productExceptSelf(vector<int>& arr) {
        // code here
        int n=arr.size();
        vector<int>pre(n),suf(n);
        pre[0]=1;
        suf[n-1]=1;
        for(int i=1;i<n;i++){
            pre[i]=pre[i-1]*arr[i-1];
        }
        
        for(int i=n-2;i>=0;i--){
            suf[i]=suf[i+1]*arr[i+1];
        }
        
        vector<int>ans(n);
        for(int i=0;i<n;i++){
            ans[i]=pre[i]*suf[i];
        }
        
        return ans;
    }
};
