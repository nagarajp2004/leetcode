class Solution {
public:
    string minWindow(string s, string t) {
       int ans=-1;
       int as=INT_MAX;
        set<char>x;
      unordered_map<char, int> mpp;

      for(auto& i:t){
        mpp[i]++;
      }


    int n=s.size();
    int i=0,j=0;
    int total=t.size();
    while(j<n){
         mpp[s[j]]--;
         if(mpp[s[j]]>=0){
            total--;
         }
                 while(!total && i<=j){
                       if(as>(j-i+1)){
                        as=j-i+1;
                        ans=i;
                       }
                       mpp[s[i]]++;
                       if(mpp[s[i]]>0){
                         total++;
                       }
                      i++;
                 }
         j++;
    }
     if(ans!=-1){
        return s.substr(ans,as);
     }
       return "";
    }
};