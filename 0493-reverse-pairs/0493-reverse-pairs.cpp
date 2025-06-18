class Solution {
public:
int cnt=0;
    void merge_2(vector<int>&nums,int i,int mid,int j){
        vector<int>temp(j-i+1);
           int right = mid + 1;
        for (int left = i; left <= mid; ++left) {
            while (right <= j && (long long)nums[left] > 2LL * nums[right]) {
                right++;
            }
            cnt += (right - (mid + 1));
        }


        int start=i;
        int ind=0; 
         int ss=mid+1;
         while(i<=mid && ss<=j){
             if(nums[ss]<nums[i]){
                temp[ind++]=nums[ss];
                ss++;
             }
             else{
                temp[ind++]=nums[i++];
             }
         }

         while(i<=mid){
           temp[ind++]=nums[i++];

         }
         while(ss<=j){
                temp[ind++]=nums[ss];
                ss++;
         }
  for(int i=0;i<temp.size();i++){
       nums[i+start]=temp[i]; 
  }

    }

     void merge(vector<int>& nums,int i,int j){
        if(i==j){
            return;
        } 
        int mid=(i+j)/2;
        merge(nums,i,mid);
        merge(nums,mid+1,j);
        merge_2(nums,i,mid,j);
     } 
    int reversePairs(vector<int>& nums) {
        int i=0;
        int n=nums.size();
        merge(nums,0,n-1);
        return cnt;
    }
};