class Solution {
  public:
    string encode(vector<string>& s) {
        // code here
         string str="";
         int n=s.size();
         for(int i=0;i<n;i++){
             if(i==n-1){
                 str+=s[i];
             }else{
                 str+=s[i]+" ";
             }
         }
         return str;
    }

    vector<string> decode(string& s) {
        
        // code here
        
        vector<string>st;
        stringstream ss(s);
        string str;
        while(ss>>str){
            st.push_back(str);
        }
        return st;
    }
};