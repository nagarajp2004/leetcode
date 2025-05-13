class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums)
    {

      int n=nums.size();
      if(n==0){
        return {};
      }
      int start=nums[0];
   vector<string>ans;
   string x;
   

      for(int i=1;i<n;i++){
           if(nums[i]!=nums[i-1]+1){
               if(start==nums[i-1])
               {
               x=to_string(start);
               }else{
                x=to_string(start)+"->"+to_string(nums[i-1]);
               }
          ans.push_back(x);
            x.clear();
            start=nums[i];
           }

      }
   if(start!=nums.back()){
      ans.push_back(to_string(start)+"->"+to_string(nums.back()));
   }else{
    ans.push_back(to_string(start));
   }

      return ans;    
    }
};