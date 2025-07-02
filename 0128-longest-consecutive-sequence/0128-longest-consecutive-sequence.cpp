class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>st(nums.begin(),nums.end());
        int maxi=1;
        int n=nums.size();
        if(n==0){
            return 0;
        }
       
       for(int i:st){

          if(st.find(i-1)==st.end()){
                int cnt=1;
                int x=i;
                while(st.find(x+1)!=st.end()){
                 cnt++;
                 x++;
                }
                maxi=max(maxi,cnt);

          }
       }
       return maxi;
    }
};