class Solution {
public:
    int maxDepth(string s) {
        
int maxi=0;
        int dept=0;
        int n=s.size();
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                dept++;
            maxi=max(maxi,dept);
            }
            else if(s[i]==')'){
                dept--;
            }
        }
        return maxi;
    }
};