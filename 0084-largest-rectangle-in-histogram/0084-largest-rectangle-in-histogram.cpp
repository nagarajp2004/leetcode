class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
           int n=h.size();
        vector<int>nsr(n);
        vector<int>psl(n);

        stack<int>st;
 
    

        for(int i=0;i<n;i++){
            while(!st.empty() && h[st.top()]>h[i]){
                  nsr[st.top()]=i;
                  st.pop();
            }
            st.push(i);
        }

        while(!st.empty()){
            nsr[st.top()]=h.size();
            st.pop();
        }

        for(int i=n-1;i>=0;i--)
        {
              while(!st.empty() && h[st.top()]>h[i]){
                  psl[st.top()]=i;
                  st.pop();
            }
            st.push(i);
        }
         while(!st.empty()){
            psl[st.top()]=-1;
            st.pop();
        }

       int maxi=INT_MIN;
       for(int i=0;i<n;i++){
          maxi=max(maxi,(nsr[i]-psl[i]-1)*h[i]);
       }
       return maxi;
        
    }
};