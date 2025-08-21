// User function Template for C++

class Solution {
  public:
    void f(vector<int>&arr,int i,int n){
        
        if(i >= n){
            return ;
        }
         
         int lar=i;
         int l=i*2 +1;
         int r= i*2 +2;
         
         if(l < n && arr[lar] < arr[l]){
             lar=l;
         }
         if(r < n && arr[lar] < arr[r]){
             lar=r;
         }
         
         if(lar != i){
              swap(arr[lar],arr[i]);
              f(arr,lar,n);
         }
    }
  
    void convertMinToMaxHeap(vector<int> &arr, int n) 
    {
        
        for(int i=n/2 ;i>=0;i--){
            f(arr,i,n);
        }
    }
};
