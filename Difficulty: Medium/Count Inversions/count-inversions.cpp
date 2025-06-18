class Solution {
  public:
    // Function to count inversions in the array.
    int cnt=0;
    
    void merge_t(vector<int>&arr,int i,int mid,int j)
    {
        int str=i;
        int ss=mid+1;
        vector<int>temp(j-i+1,0);
        int index=0;
        while(i<=mid && ss<=j){
            if(arr[i]>arr[ss]){
                cnt+=mid-i+1;
                temp[index++]=arr[ss];
                ss++;
            }else{
                temp[index++]=arr[i];
                i++;
            }
        }
        while(i<=mid){
            temp[index++]=arr[i];
                i++;
        }
        while(ss<=j){
            temp[index++]=arr[ss];
                ss++; 
        }
        
        for(int i=0;i<temp.size();i++){
            arr[i+str]=temp[i];
        }
    }
    
    void  merge(vector<int>&arr,int i,int j)
    {
      if(i==j){
          return;
      }  
      int mid=(i+j)/2;
      merge(arr,i,mid);
      merge(arr,mid+1,j);
      merge_t(arr,i,mid,j);
    }
    
    int inversionCount(vector<int> &arr)
    {
    int i=0;
    int n=arr.size();
    merge(arr,0,n-1);
        return cnt;
    }
};