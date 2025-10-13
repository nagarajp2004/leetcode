class Solution {
public:
    string removeDuplicateLetters(string s) {
        vector<int>mpp(26,0);
        vector<int>cnt(26,0);

        for(auto i: s){
            mpp[i-'a']++;
        }

        stack<int>st;
        int n=s.size();
        for(int i=0;i<n;i++){
           char x=s[i];
               mpp[x-'a']--;
               if(cnt[x-'a'] >0){
                  continue;
               }

               while(!st.empty() && st.top() > x && mpp[st.top()-'a']>0)
               {
                       cnt[st.top()-'a']--;
                       st.pop();          
              }
              st.push(x);
              cnt[x-'a']++;
        }

        string ans="";
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};