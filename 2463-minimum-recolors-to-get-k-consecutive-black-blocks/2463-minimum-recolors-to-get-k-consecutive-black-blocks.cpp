class Solution {
public:
    int minimumRecolors(string b, int k) {
        int w=0;
        int ans=INT_MAX;
        int low=0;
        for(int i=0;i<b.size();i++){
             if(b[i]=='W'){
                 w++;
             }
             if(i>=(k-1))
             {
                ans=min(ans,w);
                cout<<ans<<'\n'<<w;
                if(b[low]=='W'){
                    w--;
                }
                low++;
             }
            
        }
      return  ans;
    }
};