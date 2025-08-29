class Solution {
public:
    void f(int i,string temp,vector<string>&ans,unordered_map<int,string>&mpp,string d){
        int n=d.size();
        if(n==0){
            return ;
        }
        if(i>=n){
            
            ans.push_back(temp);
            return ;
        }
       
        for(int j=0;j<mpp[d[i]-'0'].size();j++){
                f(i+1,temp+mpp[d[i]-'0'][j],ans,mpp,d);
        }
    }

    vector<string> letterCombinations(string digits) {
        unordered_map<int,string>mpp;
        mpp[2]="abc";
        mpp[3]="def";
        mpp[4]="ghi";
        mpp[5]="jkl";
        mpp[6]="mno";
        mpp[7]="pqrs";
        mpp[8]="tuv";
        mpp[9]="wxyz";
        vector<string>st;
        string temp;
    f(0,temp,st,mpp,digits);
    return st;
    }
};