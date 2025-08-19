class Solution {
public:
    int le(vector<int>& nums ,int g)
    {
        if(g<0){
            return 0;
        }
        int no=0;
        int cnt=0;
        int j=0;
        int i=0;
        int n=nums.size();
        while(j<n)
        {
           if(nums[j]==1){
             cnt++;
           }
      

         while(cnt>g){
            if(nums[i]==1){
                cnt--;
            }
            i++;
         }  
           if(cnt<=g)  
           no+=j-i+1;

           j++;
        }
        return no;
    }

    int numSubarraysWithSum(vector<int>& nums, int goal)
    {
        return le(nums,goal)-le(nums,goal-1);
        
    }
};