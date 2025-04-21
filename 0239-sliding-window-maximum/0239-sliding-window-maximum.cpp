class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& n, int k) {
        vector<int>ans;
        deque<int>q;
        int maxi=INT_MIN;
        for(int i=0;i<k-1;i++)
        {
          if(q.empty()){
            q.push_back(i);
            continue;
          }
          else{
            while(!q.empty() && n[q.back()]<n[i])
            {
                q.pop_back();
            }
            q.push_back(i);
          }
        }

        for(int i=k-1;i<n.size();i++)
        {
           while(!q.empty() && n[q.back()]<n[i])
            {
                q.pop_back();
            }
            q.push_back(i);
           
            if(q.front()>i-k){
                ans.push_back(n[q.front()]);
            }
            else{
                while(!q.empty()&& q.front()<=i-k){
                    q.pop_front();
                }
                ans.push_back(n[q.front()]);
            }
        }
        return ans;
    }
};