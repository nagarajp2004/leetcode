class Solution {
public:
    bool isPalindrome(string s) {
        
        string ans="";
        for(int i=0;i<s.size();i++)
        {
            if(isalnum(s[i])){
                 if(s[i]>='A' && s[i]<='Z'){
                    ans+=(s[i]+32);
                 }else{
                    ans+=s[i];
                 }
            }
        }
        return equal(ans.begin(),ans.begin()+ans.size()/2,ans.rbegin());

    }
};