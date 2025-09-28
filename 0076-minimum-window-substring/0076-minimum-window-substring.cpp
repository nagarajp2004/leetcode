class Solution {
public:
    string minWindow(string s, string t) {
       int n=s.size();
       int m=t.size();

       unordered_map<char,int>mpp;
       for(auto i:t)
       {
        mpp[i]--;
       }   
         int spos=-1;
         int len=INT_MAX;
       int neg=mpp.size();
       int i=0;
       int j=0;
       while(j<n){
         mpp[s[j]]++;
         if(mpp[s[j]] ==0){
            neg--;
         }
         while(neg==0){
             if(len > j-i+1){
                len=j-i+1;
                spos=i;
             }
          
                mpp[s[i]]--;
                if(mpp[s[i]]==-1){
                    neg++;
                }
                i++;
            } 
         
       j++;

       }
        return (spos == -1) ? "" : s.substr(spos, len);
         
    }
};