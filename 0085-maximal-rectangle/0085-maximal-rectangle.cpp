class Solution {
public:
     int ans=0;
     void max_rect(vector<int>&h)
     {
stack<int>st;
 int n=h.size();
 for(int i=0;i<n;i++)
{

     while(!st.empty() && h[st.top()]>=h[i]){
        int top=st.top();
        st.pop();
         int pre=st.empty()?-1:st.top();
       ans=max(ans,h[top]*((i-pre)-1));
     }
     st.push(i);
} 
   while(!st.empty()){
    int top=st.top();
    st.pop();
    int pre=st.empty()?-1:st.top();
    ans=max(ans,h[top]*((n-pre)-1));
   }

 }
    int maximalRectangle(vector<vector<char>>& m)
    {
       int n=m[0].size();
       vector<int>h(n,0);
       for(int i=0;i<m.size();i++){
        for(int j=0;j<n;j++){
            if(m[i][j]=='0'){
                h[j]=0;
            }else{
                h[j]+=1;
            }
        }
        max_rect(h);
       }
       return ans;    
    }
};