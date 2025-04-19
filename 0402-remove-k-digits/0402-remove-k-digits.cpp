class Solution {
public:
    string removeKdigits(string num, int k) {
        string ans;
        stack<char>st;
        int n=num.size();
        if(k==n){
            return "0";
        }
        for(char i: num){
            while(!st.empty() && st.top()>i && k){
                --k;
                st.pop();
            }
            st.push(i);
        }
        while(k && !st.empty()){
            k--;
            st.pop();
        }
        if(st.empty()){
            return "0";
        }
        
        while(!st.empty()){
            ans+=st.top();
            st.pop();
        }
        int i=0;
        reverse(ans.begin(),ans.end());
      
        while (i < ans.size() && ans[i] == '0') {
            i++;
        }

        ans = ans.substr(i);
        return ans.empty() ? "0" : ans;
    }
};