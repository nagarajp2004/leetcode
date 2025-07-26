class Solution {
public:
    string reverseWords(string s) {
       
        vector<string>st;
        string x;
    
       reverse(s.begin(),s.end());
        stringstream ss(s);
        while(ss>>x){
            st.push_back(x);
        }

       for(int i=0;i<st.size();i++){
           reverse(st[i].begin(),st[i].end());
       }
       
       string ans;

        for (int i = 0; i < st.size(); i++) {
            ans += st[i];
            if (i != st.size() - 1)
                ans += ' ';
        }
 
    return ans;
    }
};