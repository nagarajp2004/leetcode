class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& mat) {
        
        long long  total=0;
        int n=mat.size();
        int no_n=0;
        int  min_abs=INT_MAX;
        for(int i=0;i<n;i++){
            for(auto x:mat[i]){
                if(x<0){
                    no_n++;
                }
                min_abs=min(min_abs,abs(x));
                total+=abs(x);
            }
        }

    if(no_n%2 ==0){
       return total;
    }else{
        return total - (2*min_abs);
    }

 return -1;
    }
};