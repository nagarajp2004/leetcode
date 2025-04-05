class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n=strs.size();
        if(n==0){
            return "";
        }
        int sub=-1;
       
        sort(strs.begin(),strs.end());
        string x=strs[0],y=strs[n-1];
        int i;
        for( i=0;i<min(x.size(),y.size());i++){
            if(x[i]!=y[i]){
                sub=i;
                break;
            }
        }
        return x.substr(0,i);
    }
};