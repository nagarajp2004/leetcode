class Solution {
public:

    int numberOfAlternatingGroups(vector<int>& col, int k) {
        
        int left=0;
        int count=0;
       int n=col.size();
       for(int right=1;right<(n+k-1);right++){
        if(col[right%n]==col[(right-1)%n]){
           left=right;
        }
         else if(right-left+1>=k){
                     count++;
         }
       }
       return count;
    }
};