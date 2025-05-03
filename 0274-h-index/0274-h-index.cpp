class Solution {
public:
    int hIndex(vector<int>& c) {
        int ans=0;
        sort(c.begin(),c.end(),greater<int>());
        for(int i=0;i<c.size();i++){
            if(c[i]>=i+1){
              ans=i+1;
            }
            else{
                break;
            }
        }
        return ans;
    }
};