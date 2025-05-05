class Solution {
 public:
    bool check_pali(string x){

        bool y;
        y=equal(x.begin(),x.begin()+(x.size()/2),x.rbegin());
        return y;
    }

    void recur(string s,vector<vector<string>>&ans,vector<string>temp,int i){
        if(i==s.size()){
           ans.push_back(temp);
            return; 
        }


        int n=s.size();
        string was;
        for(int j=i;j<n;j++){
            was.push_back(s[j]);
            if(check_pali(was)){
                temp.push_back(was);
                recur(s,ans,temp,j+1);
                temp.pop_back();
            }

        }
    }

    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        recur(s,ans,temp,0);
        return ans;
    }
};