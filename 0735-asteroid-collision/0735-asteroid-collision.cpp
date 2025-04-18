class Solution {
public:
    vector<int> asteroidCollision(vector<int>& a)
    {
        stack<int>st;
        vector<int>ans;
        int n=a.size(); 
        for(int i=0;i<n;i++)
        {
             int flag=false;
           while(!st.empty() && st.top()>0 && a[i]<0)
           {
               if(abs(st.top())<abs(a[i])){
                    st.pop();
                   
               }
               else if(abs(st.top())==abs(a[i]))
               {
                flag=true;
                st.pop();
                break;
               }else{
                flag=true;
                break;
               }
                
           }
           if(!flag)
           {
             st.push(a[i]);
           }

           
        }
  
        while(!st.empty()){
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};