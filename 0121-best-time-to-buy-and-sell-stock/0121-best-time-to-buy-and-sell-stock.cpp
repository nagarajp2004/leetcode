class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int n=prices.size();
        int mini=INT_MAX;
        int total=0;
        for(int i=0;i<n;i++)
        {
            int profit=prices[i]-mini;
            total=max(total,profit);
            mini=min(mini,prices[i]);
              
        }
        return total;
    }
};