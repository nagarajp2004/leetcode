class Solution {
public:
    int largestRectangleArea(vector<int>& hi) {
        
        stack<int>st;
    
        int n=hi.size();
        vector<int>lps(n,-1);
        for(int i=0;i<n;i++){

            while(!st.empty() && hi[st.top()] >hi[i]){
                st.pop();
            }
            if(st.empty()){
                lps[i]=-1;
            }else{
                lps[i]=st.top();
            }
            st.push(i);

        }


        while(!st.empty()){
            st.pop();
        }

      vector<int>rse(n,n);
      for(int i=0;i<n;i++){
   
         while(!st.empty() && hi[st.top()] > hi[i]){
            rse[st.top()]=i;
            st.pop();
         }
         st.push(i);
      }
      int maxi=-1;
    
     for(int i=0;i<n;i++){
        lps[i]=(rse[i]-1-lps[i])*hi[i];
        maxi=max(maxi,lps[i]);
     }
     return maxi;
    
    }
};