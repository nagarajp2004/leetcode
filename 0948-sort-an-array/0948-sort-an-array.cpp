class Solution {
public:
   void merge_sort(vector<int>&a,int s,int mid,int e)
   {        
           int s2=mid+1;
           int z=s;
           vector<int>temp;
          while(s<=mid && s2<=e){
            if(a[s]<=a[s2]){
               temp.push_back(a[s]);
               s++;
            }
            else{
                temp.push_back(a[s2]);
               s2++;
            }
          }
          while(s<=mid){
              temp.push_back(a[s]);
             s++;
          } 
          while(s2<=e){
                 temp.push_back(a[s2]);
            s2++;
          } 

          for(int i=z;i<=e;i++){
            a[i]=temp[i-z];
          }             
   }
   
   void merge(vector<int>&nums,int s,int e)
   {
         if(s>=e){
            return;
         }
         int mid=s+(e-s)/2;
         merge(nums,s,mid);
         merge(nums,mid+1,e);
         merge_sort(nums,s,mid,e);
   }
    vector<int> sortArray(vector<int>& nums) 
    {
        int n=nums.size()-1;
        merge(nums,0,n);
        return nums;
    }
};