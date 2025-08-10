class Solution {
  public:
      int count=0;
      void merge_sort(int i,int mid,int j,vector<int>&arr)
      {
           int st=i;
           vector<int>temp;;
           int x=mid+1;
           
           
           while(i<=mid && x <=j){
               if(arr[i] > arr[x]){
                   count+=(mid-i+1);
                   temp.push_back(arr[x]);
                   x++;
               }else{
                    temp.push_back(arr[i]);
                    i++;
               }
           }
           
           while(i<=mid){
                temp.push_back(arr[i]);
                    i++;
           }
           
           
           while(x<=j){
                temp.push_back(arr[x]);
                   x++;
           }
           
           for(auto i:temp){
               arr[st++]=i;
           }
           
           
           
      }
     void merge(int i,int j,vector<int>& arr){
         if(i>=j){
             return ;
         }
         
         int mid=(i+j)/2;
         merge(i,mid,arr);
         merge(mid+1,j,arr);
         merge_sort(i,mid,j,arr);
         
     }
    
  
    int inversionCount(vector<int> &arr) {
        // Code Here
        int i=0;
        int j=arr.size()-1;
        merge(i,j,arr);
        return count;
        
    }
};