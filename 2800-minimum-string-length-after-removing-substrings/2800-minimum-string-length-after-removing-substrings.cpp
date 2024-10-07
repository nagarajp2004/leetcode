class Solution {
public:
    int minLength(string s) {
        
   
     
         stack<int>st;
        for(auto i: s)
        {
           if((i=='B') &&(!st.empty()))
           {
             if(st.top()=='A')
             {
                st.pop();
               
             }
             else{
                st.push(i);
             }
           }
       else if((i=='D') &&(!st.empty()))
           {
             if(st.top()=='C')
             {
                st.pop();
                
             }
             else{
                st.push(i);
             }
           }
           else{
            st.push(i);
           }

         }
       
        return st.size();
    }
};