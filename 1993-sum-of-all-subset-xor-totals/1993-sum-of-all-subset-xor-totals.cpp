class Solution {
public:
    int subsetXORSum(vector<int>& nums)
    {
        int n=nums.size();
        int total=0;
        int nu=pow(2,n);
        for(int i=0;i<nu;i++){
            int x=0;
           for(int j=0;j<n;j++){
                 if((i>>j) &1){
                    x^=nums[j];
                 }
           }
           total+=x;
        }  
        return total;  
    }
};