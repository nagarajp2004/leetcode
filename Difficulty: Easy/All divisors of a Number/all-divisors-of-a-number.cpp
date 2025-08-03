class Solution {
  public:
    void print_divisors(int n) {
        // Code here.
    
        vector<int>ans;
        
        int sq=sqrt(n);
        
        for(int i=1;i<=sq;i++){
            if(n%i==0){
                cout<<i<<" ";
                if(i!=(n/i)){
                    ans.push_back(n/i);
                }
            }
        }
        reverse(ans.begin(),ans.end());
        
        for(int i=0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }
    }
};