class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int a=-9999,b=-9999;
        int cnt1=0,cnt2=0;
        int n=nums.size();
         int c=n/3;
        for(int i=0;i<n;i++){
            if((cnt1==0 && b!=nums[i]) || a==nums[i]){
                cnt1++;
                a=nums[i];
            }else if(cnt2==0 || b==nums[i]){
                cnt2++;
                b=nums[i];
            }else{
                cnt1--;
                cnt2--;
            }
        }
       cnt1=0;
       cnt2=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(a==nums[i]){
                cnt1++;
            }
            if(b==nums[i]){
                cnt2++;
            }
        }
        if(cnt1>c){
            
          ans.push_back(a);
        }
        if(cnt2>c){
            ans.push_back(b);
        }
        return ans;
    }
};