class Solution {
public:
    class descsort{
    public:
     bool operator()(pair<char,int>&a,pair<char,int>&b){
         return a.second>b.second;
     }
    };
   

    string frequencySort(string s) {
        
        map<char,int>mpp;
        for(char i:s){
            mpp[i]++;
        }

        vector<pair<char,int>>vt(mpp.begin(),mpp.end());

        sort(vt.begin(),vt.end(),descsort());
          
          string ans="";
        for(pair<char,int>a :vt){
            for(int i=0;i<a.second;i++){
                ans.push_back(a.first);
            }
        }
        return ans;
    }
};