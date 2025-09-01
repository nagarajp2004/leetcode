class Solution {
  public:
    // Function to partition the array around the range such
    // that array is divided into three parts.
    void threeWayPartition(vector<int>& arr, int a, int b) {
        // code here
        int l=0;
        int m=0;
        int n=arr.size();
        int h=n-1;
        
        while(m<=h){
            if(arr[m]<a){
                swap(arr[m],arr[l]);
                l++;
                m++;
            }
            else if(arr[m] >b){
                swap(arr[m],arr[h]);
                h--;
            }else{
                m++;
            }
        }
    }
};