class Solution {
public:
    int maxDepth(string s) {
        
        int open=0;
        int n=s.size();
        int maxi=0;
        for(int i=0;i<n;i++){
           if(s[i]=='('){
            open++;
           }else if(s[i]==')'){
            open--;
           }
          maxi=max(maxi,open);
        }
        return maxi;

    }
};