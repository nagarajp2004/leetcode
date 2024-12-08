class Solution {
public:
    int findMin(vector<int>& arr) {
        int ans=arr[0];
        int i=0,j=arr.size()-1;
        while(j>=i){
            int mid=(i+j)/2;
            if(arr[mid]>=arr[0]){
                i=mid+1;
            }
            else{
                ans=min(arr[mid],ans);
                j=mid-1;
            }
        }
        return ans;
    }
};