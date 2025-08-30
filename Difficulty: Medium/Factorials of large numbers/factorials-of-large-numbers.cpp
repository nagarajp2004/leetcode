// User function template for C++

class Solution {
  public:
    vector<int> factorial(int n) {
        // code here
        vector<int>ans(1,1);
        while(n>1){
            int car=0,res=0;
            for(int i=0;i<ans.size();i++){
                res=ans[i]*n + car;
                car=res/10;
                ans[i]=res%10;
            }
            
            while(car){
                ans.push_back(car%10);
                car=car/10;
            }
            n--;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};