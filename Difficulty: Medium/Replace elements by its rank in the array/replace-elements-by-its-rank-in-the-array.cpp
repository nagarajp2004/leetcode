// User function Template for C++

class Solution {
  public:

    vector<int> replaceWithRank(vector<int> &arr, int N) {
        
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        
        for(int i=0;i<arr.size();i++){
            pq.push({arr[i],i});
        }
        int prev=-99999;
        int index=0;
        while(!pq.empty()){
             auto [x,y]=pq.top();
             pq.pop();
            
            if(prev !=x)
             index++;
              arr[y]=index;
             prev=x;
        }
        return arr;
    }
};
