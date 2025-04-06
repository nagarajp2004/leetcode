class Solution {
public:
    bool isIsomorphic(string s, string t)
     {
        unordered_map<char,char>st;

        int n1=s.size();
        int n2=t.size();
        if(n1!=n2)
        {
            return false;
        }
       for(int i=0;i<n1;i++)
       {
        if(st.count(s[i]))
        {
           if(st[s[i]]!=t[i]){
            return false;
           }
        }
        else
        {
           for(auto& k :st)
           {
            if(k.second==t[i])
            {
                return false;
            }
           }
           st[s[i]]=t[i];
        }
       }
       return true;
    }
};