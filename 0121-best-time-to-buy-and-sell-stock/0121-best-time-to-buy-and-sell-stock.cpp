class Solution {
 public:
  
    int maxProfit(vector<int>& p) 
    {
       int mini=p[0],profit=0;
       int n=p.size();
       for(int i=1;i<n;i++){
           int cost=p[i]-mini;
           profit=max(cost,profit);
           mini=min(mini,p[i]);
       }
       return profit;
    }
};