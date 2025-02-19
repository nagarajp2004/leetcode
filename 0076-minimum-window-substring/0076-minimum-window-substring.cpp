class Solution {
public:
    string minWindow(string s, string t)
     {
      unordered_map<char,int>m;
      for(auto i:t){
        m[i]++;
      }    
      int maxi=INT_MAX;
   int ans=0;
      int total=t.size();
      int n=s.size();
      int i=0,j=0;
      while(j<n){
         m[s[j]]--;
        if(m[s[j]]>=0)
            total--;
       
       
       while(!total && i<=j){
           if(maxi>j-i+1){
            maxi=j-i+1;
            ans=i;
           }
           m[s[i]]++;
           if(m[s[i]]>0){
            total++;
           }
           i++;
       }
       j++;
       
      }
      string ex=s.substr(ans,maxi);

if(maxi==INT_MAX){
    return "";
}

   return ex;

    }
};