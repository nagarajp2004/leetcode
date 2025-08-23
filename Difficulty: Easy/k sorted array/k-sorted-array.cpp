// User function template for C++

class Solution {
  public:
    string isKSortedArray(int arr[], int n, int k) {
        // code here.
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pq;
        
        for(int i=0;i<n;i++){
            pq.push({arr[i],i});
        }
        
        int index=0;
        while(!pq.empty()){
            if(abs(pq.top().second - index) > k){
                return "No";
            }
            pq.pop();
            index++;
        }
        return "Yes";
    }
};