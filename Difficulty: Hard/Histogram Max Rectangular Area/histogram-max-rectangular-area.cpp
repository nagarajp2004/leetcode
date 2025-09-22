class Solution {
  public:
     void prevsmaller(vector<int>& prev,vector<int>&arr){
         
         
         int n=arr.size();
         
         stack<int>st;
         
         for(int i=0;i<n;i++){
             while(!st.empty() && arr[i] < arr[st.top()]){
                 st.pop();
             }
             if(!st.empty()){
                 prev[i]=st.top();
             }
             st.push(i);
         }
         
     }
     
     
     void nextsmaller(vector<int>& next,vector<int>&arr){
         int n=arr.size();
         
         stack<int>st;
         
        for(int i=0;i<n;i++){
            while(!st.empty() && arr[i] < arr[st.top()]){
                next[st.top()]=i;
                st.pop();
            }
            st.push(i);
        }
     }
  
  
  
    int getMaxArea(vector<int> &arr) {
        // code here
        int n=arr.size();
        vector<int>prev(n,-1);
        vector<int>next(n,n);
        
        prevsmaller(prev,arr);
        nextsmaller(next,arr);
         int ans=0;
         
         for(int i=0;i<n;i++){
             int p=prev[i];
             int nes=next[i];
             ans=max(ans,(nes-p-1)*arr[i]);
         }
         return ans;
    
    }
};
