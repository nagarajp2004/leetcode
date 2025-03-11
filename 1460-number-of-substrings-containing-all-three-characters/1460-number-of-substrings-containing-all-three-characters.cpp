class Solution {
public:


    int numberOfSubstrings(string s) 
    {
        map<char,int>mpp;
        int low=0;
        int ans=0;
        int n=s.size();
        for(int i=0;i<s.size();i++){
          
              mpp[s[i]]++;  
             
             while(mpp.size()==3 && low<n){
                ans+=n-i;
               
                mpp[s[low]]--;
                if(mpp[s[low]]<=0){
                    mpp.erase(s[low]);
                }
                low++;
             }
        }
        return ans;

    }
};