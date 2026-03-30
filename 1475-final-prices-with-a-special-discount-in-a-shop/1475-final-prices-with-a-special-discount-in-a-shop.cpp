class Solution {
public:
    vector<int> finalPrices(vector<int>& pr) {
    
     int n=pr.size();

     vector<int>ans(n,0);
     ans[n-1]=pr[n-1];
     stack<int>st;
     st.push(pr[n-1]);

       int i=n-2;

     while(i>=0){
       
       while(!st.empty() && st.top() > pr[i]){
        st.pop();
       }
       if(st.empty()){
        st.push(pr[i]);
        ans[i]=pr[i];
       }else{
         ans[i]=pr[i]-st.top();
        st.push(pr[i]);
       
       }
       i--;

     }
     return ans;

    }
};