class Solution {
public:
    int largestRectangleArea(vector<int>& h)
    {
        int n=h.size();
       vector<int>nsr(n,n);
       vector<int>psl(n,-1);
       stack<int>st;

       for(int i=n-1;i>=0;i--)
       {
           while(!st.empty() && h[st.top()]>=h[i]){
            st.pop();
           }
           if(!st.empty()){
               nsr[i]=st.top();
           }
           st.push(i);
       }
    while(!st.empty()){
        st.pop();
    }
       
       for(int i=0;i<n;i++){
            while(!st.empty() && h[st.top()]>=h[i])
            {
               st.pop();
            }
            if(!st.empty()){
                psl[i]=st.top();
            }
            st.push(i);
       }
       
   int ans=0;
   for(int i=0;i<n;i++)
   {
      ans=max(ans,((nsr[i]-psl[i])-1)*h[i]);
   }
   return ans;
    }
};