class Solution {
public:
    int maxScore(vector<int>& c, int k) {
        int ans=0;
        int left=0;

        int n=c.size();
        for(int i=0;i<k;i++){
            left +=c[i];
        }
        ans=max(ans,left);

        int right=0;
        for(int i=0;i<k;i++){
          left-=c[k-i-1];
          right +=c[n-i-1];
        ans=max(ans,left+right);
        }

        return ans ;
    }
};