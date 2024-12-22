class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
      int sum=k;
      for(int i=0;i<arr.size();i++){
        if(sum>=arr[i]){
           sum++;
        }
        else{
            return sum;
        }
      }
      return sum;
    }
};