class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        
     int low=0;
      int x;
      int mid=0;
     int high=arr.size()-1;
     while(high>=low)
     {
        mid=(low+high)/2;
        x=arr[mid]-(mid+1);
        if(x<k){
           
           low=mid+1;
        }
        else{
            high=mid-1;
        }
     }
     return low +k;
       
    }
};