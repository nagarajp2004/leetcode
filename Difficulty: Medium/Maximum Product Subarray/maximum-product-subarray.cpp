class Solution {
  public:
    int maxProduct(vector<int> &arr) {
        // code here
        int l=1;
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                l=1;
            }else{
            l*=arr[i];
                 maxi=max(maxi,l);
            }
           
        }
        int r=1;
        for(int j=arr.size()-1;j>=0;j--){
            if(arr[j]==0){
                r=1;
            }else{
            r*=arr[j];
             maxi=max(maxi,r);
            }
           
        }
     for(auto i:arr){
         if(i==0){
             if(maxi<0){
                 return 0;
             }
         }
     }
        
        return maxi;
    }
};