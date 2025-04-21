class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k)
    {
        int n=nums.size();
deque<int>q;
int maxi=INT_MIN;
vector<int>ans;
for(int i=0;i<k-1;i++)
{
   if(q.empty()){
    q.push_back(i);
   }else
   {
    while(!q.empty() && nums[q.back()]<nums[i])
    {
        q.pop_back();
    }
    q.push_back(i);
   }
}


for(int i=k-1;i<n;i++)
{
      while(!q.empty() && nums[q.back()]<nums[i])
    {
        q.pop_back();
    }
    q.push_back(i);
   
   int x=q.front();
   if(x>(i-k)){
     ans.push_back(nums[x]);
   }else{
     while(!q.empty() && q.front()<=i-k){
        q.pop_front();
     }
     ans.push_back(nums[q.front()]);

   }
}
return ans;
   
    }
};