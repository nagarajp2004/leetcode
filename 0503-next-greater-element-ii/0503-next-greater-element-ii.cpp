class Solution {
public:
    vector<int> nextGreaterElements(vector<int>& num) {
        int n=num.size();
        stack<int>st;
        vector<int>ans;
        for(int i=n-1;i>=0;i--){
            
                while(!st.empty()&& st.top()<=num[i])
                {
                    st.pop();
                }
                int x = n - 1;
int j = 1;
bool found = false;
while (x--) {
    int idx = (i + j) % n;
    if (num[idx] > num[i]) {
        st.push(num[idx]);
        found = true;
        break;
    }
    j++;
}
if (found)
    ans.push_back(st.top());
else
    ans.push_back(-1);

              
                st.push(num[i]);
             }

         reverse(ans.begin(),ans.end());
             return ans;
        }

    
};