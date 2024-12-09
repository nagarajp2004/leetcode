class Solution {
public:
     double f(vector<int>&p,int x,int h){
        double count=0;

        for(int i=0;i<p.size();i++){
            count+=ceil((double)p[i]/(double)x);

        }
        return count;
     }

    int minEatingSpeed(vector<int>& piles, int h) {
        int i=1;
        int j=*max_element(piles.begin(),piles.end());
        int ans=-1;
        while(j>=i){
            int mid=(i+j)/2;
            if(f(piles,mid,h)<=h){
               ans=mid;
                j=mid-1;
            }
            else{
                
                i=mid+1;
            }
        }
        return ans;
    }
};