class Solution {
public:
    vector<int> plusOne(vector<int>& ds) {
        int n=ds.size();
        int  car=1;
        for(int i=n-1;i>=0;i--){
           int sum=ds[i]+car;
           ds[i]=sum%10;
           car=sum/10;
           if(car==0){
            return ds;
           }
        }
      if (car) {
            ds.insert(ds.begin(), 1);
        }
        return ds;
    }
};