class Solution {
public:
    int beautySum(string s) {
        int n=s.size();
        int sum=0;

        for(int i=0;i<n;i++){
            unordered_map<char,int>mpp;
            for(int j=i;j<n;j++){
                mpp[s[j]]++;
                int maxi=INT_MIN;
                int mini=INT_MAX;

                for(auto& [x,y]:mpp)
                {
                  maxi=max(maxi,y);
                  mini=min(mini,y);
                }
                sum+=(maxi-mini);
            }
        }
        return sum;
    }
};