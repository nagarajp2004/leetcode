class Solution {
  public:
    int f(int n,vector<int>&vt){
        if(n<=0){
            return 0;
        }
        if(n==1){
            return 1;
            
        }
          if(n==2){
            return 2;
        }
        if(vt[n]!=-1){
            return vt[n];
        }
      
        return vt[n]=f(n-1,vt)+f(n-2,vt);
        
    }
   
    int numberOfWays(int n) {
        // code here
        vector<int>vt(n+1,-1);
        return f(n,vt);
    }
};