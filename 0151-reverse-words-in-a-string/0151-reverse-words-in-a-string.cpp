class Solution {
public:
    string reverseWords(string s) {
        string x =s;
        reverse(x.begin(),x.end());
        stringstream ss(x);
        string ans;
        string i;
        while(ss >> i){
            reverse(i.begin(),i.end());
            ans=ans+" "+i;
        }
        return ans.substr(1);
    }
};