class Solution {
public:
    string reverseWords(string s) {
      stringstream ss(s);
      vector<string>vt;
      string x;
      while(ss>>x){
           vt.push_back(x);
      }  
      reverse(vt.begin(),vt.end());
      
   string ans;
      for(int i=0;i<vt.size();i++){
         if(i>0){
          ans=ans+" "+vt[i];
          continue;
         }
        ans+=vt[i];
      }
      return ans;
    }
};