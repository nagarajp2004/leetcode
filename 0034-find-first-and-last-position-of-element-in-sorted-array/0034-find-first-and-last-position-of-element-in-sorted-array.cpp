class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int tar) {
        int n=nums.size();
        if(n==0){
            return {-1,-1};
        }
        int i=0,j=n-1;
        int ans=-1;
        while(i<=j){
            int mid=i+(j-i)/2;
            if(nums[mid]<=tar){
               ans=mid;
               i=mid+1;
            }else{
                j=mid-1;
            }
        }
        if(ans==-1 ||nums[ans]!=tar){
            return {-1,-1};
        }
        int r=ans;
        int l=-1;
        while(0<=ans){
           ans--;
           if(ans!=-1 && nums[ans]!=tar){
            break;
           }   
        } 
         
       int left=ans+1;
      
        return {left,r};
    }
};