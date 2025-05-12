class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int n=strs.size();
        vector<int>used(n,0);

sort(strs.begin(),strs.end());
        unordered_map<int,unordered_map<char,int>>mpp;

        for(int i=0;i<n;i++){
            int size=strs[i].size();
            for(int j=0;j<size;j++){
                mpp[i][strs[i][j]]++;
            }
        }

        vector<vector<string>>ans;
        for(int i=0;i<n;i++){
            if(used[i]==1){
                continue;
            }
            vector<string>temp={strs[i]};
            for(int j=i+1;j<n;j++){
                  if(mpp[i]==mpp[j]){
                    temp.push_back(strs[j]);
                     used[j]=1;
                  }
            }
            ans.push_back(temp);
        }
        return ans;
    }
};