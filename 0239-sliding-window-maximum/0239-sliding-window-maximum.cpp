class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
 
     vector<int>ans;
      deque<int>q;
    int n=nums.size();
    
     for(int i=0;i<k-1;i++){
         while(!q.empty() && nums[q.back()] < nums[i]){
            q.pop_back();
         }
         q.push_back(i);
     }

     for(int i=k-1;i<n;i++){
         while(!q.empty() && nums[q.back()] < nums[i]){
            q.pop_back();
         }
         q.push_back(i);
         while(!q.empty() && q.front() <= i-k){
            q.pop_front();
         }
         ans.push_back(nums[q.front()]);
     }

   return ans; 

    }
};