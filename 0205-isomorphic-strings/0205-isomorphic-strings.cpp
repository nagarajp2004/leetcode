class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        int n=s.size();
        int m=t.size();
   unordered_map<int,int>mpp;

        if(n<m || m<n){
            return false;
        }
       for(int i=0;i<n;i++)
       {
         if(mpp.count(s[i]))
         {
           if(mpp[s[i]]!=t[i])
                return false;  ;      
         }else{

            for(auto& k:mpp){
                if(k.second == t[i]){
                    return false;
                }
            }
            mpp[s[i]]=t[i];
         }

       }
       return true;
    }
};