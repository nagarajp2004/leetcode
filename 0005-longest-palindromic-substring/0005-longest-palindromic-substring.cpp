class Solution {
public:
    string longestPalindrome(string s) 
    {
           if (s.length() <= 1) {
            return s;
        }
        int maxi=0;
        string maxs="";
        auto x=[&](int i,int j)->string
        {
            while(i>=0 && j<s.size() && s[i]==s[j])
            {
      i--;
      j++;
            }
           return s.substr(i+1,j-i-1);
           
        };
      for(int i=0;i<s.size();i++){
        string odd=x(i,i);
        string even=x(i,i+1);
        if(odd.size()>maxs.size()){
            maxs=odd;
        }
       if(even.size()>maxs.size()){
          maxs=even;
       }

      }
      return maxs;

    }
};