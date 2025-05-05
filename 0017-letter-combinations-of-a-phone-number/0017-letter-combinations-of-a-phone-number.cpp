class Solution {
public:
    void recur(string& d,unordered_map<int,string>&mpp,vector<string>&st,string& temp,int i){
        if(i==d.size()){
           st.push_back(temp);
            return ;
        }
        char x=d[i];
        int val=x-'0';
        string y=mpp[val];
        int n=y.size();
        for(int z=0;z<n;z++){
            temp.push_back(y[z]);
            recur(d,mpp,st,temp,i+1);
            temp.pop_back();
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
    if(digits.size()==0){
        return {};
    }
    recur(digits,mpp,st,temp,0);
    return st;
    }
};