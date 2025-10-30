class Solution {
  public:
    vector<int> lps(string s)
   { 
       int n=s.size();
      vector<int> longest(n,0);
      
     int i=1;
     int len=0;
     
     while(i<n){
         if(s[i]==s[len]){
             len++;
             longest[i]=len;
             i++;
         }else{
             if(len!=0){
                 len=longest[len-1];
             }else{
                 longest[i]=0;
                 i++;
             }
         }
     }
     return longest;
   }  
    bool areRotations(string &s1, string &s2) {
        // code here
        if (s1.size() != s2.size()) return false;

        string x=s1+s1;
        string pat=s2;
        
        vector<int>lpsarray=lps(pat);
        
      
        int m=pat.size();
        int i=0;
        int j=0;
        int n=x.size();
        
        while(i<n){
            if(x[i]==pat[j]){
                i++;
                j++;
            }
            if(j==m){
                return true;
            }
            else if(i< n && x[i]!=pat[j]){
                if(j!=0){
                     j=lpsarray[j-1];
                }else{
                    i++;
                }
            }
        }
        return false;
        
    }
};