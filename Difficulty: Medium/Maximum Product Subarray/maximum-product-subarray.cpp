class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int left =1;
        int maxi=INT_MIN;
         int n=arr.size();
        if(n==1){
            return arr[0];
        }
        
        
        
        for(int i=0;i<arr.size();i++)
        {
             if(left==0){
              left=1;
          }
          left*=arr[i];
          maxi=max(maxi,left);
         
          
        }
       
        int right=1;
        for(int j=n-1;j>=0;j--){
          
            if(right==0){
                right=1;
            }
            right*=arr[j];
          
            maxi=max(maxi,right);
        }
        return maxi;
        
    }
};