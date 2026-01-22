class Solution {
  public:
    int subarrayRanges(vector<int>& arr) {
        // code here
        
        long long max_sum=0;
        long long  mini_sum=0;
        stack<int>st;
        
        int n=arr.size();
        
        for(int i=0;i<=n;i++)
        {
            while(!st.empty() && (i==n || arr[st.top()] > arr[i]))
            {
                int mid=st.top();
                st.pop();
               int left = st.empty() ? -1 : st.top();
                int right=i;
                mini_sum+=(long long )arr[mid] *(mid-left)*(right-mid);
            }
            st.push(i);
        }
        while(!st.empty())
         {
             st.pop();
         }
         
    // --------- Maximum contribution ----------
        for(int i = 0; i <= n; i++){
            while(!st.empty() && (i == n || arr[st.top()] < arr[i])){
                int mid = st.top(); st.pop();
                int left = st.empty() ? -1 : st.top();
                int right = i;
                max_sum += (long long)arr[mid] * (mid - left) * (right - mid);
            }
            st.push(i);
        }
        
        return (int)(max_sum -mini_sum);

    }
};