class Solution {
public:
    int removeDuplicates(vector<int>& nums) 
    {
  
   int val=999;
   int n=nums.size();
  int i=0;
  int c=0;
   int j=0;
  while(i<n)
  {
      if(val!=nums[i]){
        val=nums[i];
        c=1;
      }else{
        c++;
      }
       
       if(c>2){
       i++;
       continue;
       }
       nums[j]=nums[i];
       j++;
       i++;

  }
  return j;
    }
};