class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int low=0;
         int n=(matrix[0].size() * matrix.size())-1;
         int high=n;
         int col=matrix[0].size();

         while(high>=low)
         {
            int mid=(high+low)/2;
            int r=mid/col;
            int c=mid%col;
            if(matrix[r][c]==target){
                return true;
            }
            else if(matrix[r][c]>target){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
         }
         return false;
    }
};