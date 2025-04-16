class Solution {
public:
    int trap(vector<int>& h)
    {
        int total=0;
        int lmax=0,rmax=0;
        int i=0,j=h.size()-1;
        while(i<j){
            if(h[i]<=h[j])
            {
                if(lmax<h[i]){
                    lmax=h[i];
                }else{
                    total+=(lmax-h[i]);
                }
                i++;
            }else
            {
                if(rmax<h[j]){
                    rmax=h[j];
                }else{
                    total+=(rmax-h[j]);
                }
                j--;
            }

        }
        return total;
    }
};