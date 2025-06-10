class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
       int r=mat.size();
       int c=mat[0].size();
       int i=0,j=r*c-1;

       while(i<=j){

         int mid=i+(j-i)/2;
         if(mat[mid/c][mid%c]==tar){
            return true;
         }
         else if(mat[mid/c][mid%c]> tar){
            j=mid-1;
         }
         else{
            i=mid+1;
         }
       }
       return false;
    }
};