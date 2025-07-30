class Solution {
  public:
    // Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int k) {
        // code here
       
       vector<int>ans;
       
       priority_queue<pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,
       greater<pair<int,pair<int,int>>>>pq;
       
       for(int i=0;i<k;i++){
           pq.push({arr[i][0],{i,0}});
       }
       
       while(!pq.empty()){
           int val=pq.top().first;
           int r=pq.top().second.first;
           int c=pq.top().second.second;
           pq.pop();
           
           ans.push_back(val);
           
           if(c+1 < arr[r].size()){
               pq.push({arr[r][c+1],{r,c+1}});
           }
           
       }
       return ans;
       
    }
};