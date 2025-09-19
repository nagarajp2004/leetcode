class Solution {
  public:
    int activitySelection(vector<int> &s, vector<int> &f) {
        // code here
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>pt;
        
        int n=s.size();
        for(int i=0;i<n;i++){
            pt.push({f[i],s[i]});
        }
        int ans=0;
        int prev=-1;
        
        while(!pt.empty()){
            int x=pt.top().first;
            int y=pt.top().second;
            
            if(prev==-1 || prev <y){
                ans++;
            prev=x;
            }
            pt.pop();
            
        }
        return ans;
        
    }
};