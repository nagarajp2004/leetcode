class Solution {
  public:
    int findKRotation(vector<int> &arr) {
        // Code Here
        int i=0;
        int j=arr.size()-1;
        
        while(i<=j){
            if(arr[i] <= arr[j]){
                return i;
            }
            
            int mid=(i+j)/2;
            
            if(arr[mid] >arr[j]){
                 i=mid+1;
            }else{
                j=mid;
            }
        }
        return 0;
    }
};
