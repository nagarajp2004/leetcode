class Solution {
public:
    vector<int> find_nse(vector<int>& arr) {
        int n = arr.size();
        vector<int> nse(n);
        stack<int> st;
          
        for (int i = n - 1; i >= 0; i--) {
            // Pop until we find the next smaller element
            while (!st.empty() && arr[st.top()] >= arr[i]) {
                st.pop();
            }

            // If stack is empty, no smaller element => use n
            nse[i] = st.empty() ? n : st.top();
            st.push(i);
        }

        return nse;
    }
    vector<int> find_pse(vector<int>& arr)
    {
        int n=arr.size();
      vector<int>pse(n,0);
      stack<int>st;
      for(int i=0;i<n;i++){
        while(!st.empty() && arr[st.top()]>arr[i]){
            st.pop();
        }
        if(st.empty()){
              pse[i]=-1;
        }else{
              pse[i]=st.top();
        }
        st.push(i);
      }
      return pse;
    }
    int sumSubarrayMins(vector<int>& arr)
     {
        long long total=0;
        int mod=1000000007;
        vector<int>nse;
        vector<int>pse;
      
        nse=find_nse(arr);
         
        pse=find_pse(arr);
        int n=arr.size();
        for(int i=n-1;i>=0;i--)
        {
          long long left = i - pse[i];       // Elements to the left including i
            long long right = nse[i] - i;      // Elements to the right including i
            total = (total + (left * right % mod) * arr[i] % mod) % mod;
        }
        return total%mod;
    }
};