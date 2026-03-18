class Solution {
public:
    vector<string> buildArray(vector<int>& tar, int n) {

      vector<string>ans;
      int i=0;
        int size=tar.size();

        stack<int>st;
      int x=1;
      while(i<size){
         st.push(x);
         ans.push_back("Push");
         if(st.top() != tar[i]){
            ans.push_back("Pop");
            st.pop();

         }else
           i++;

           x++;
      }
      return ans;

    }
};