class Solution {
public:
    int countDays(int days, vector<vector<int>>& m) {
        int n=m.size();
        vector<vector<int>>newm;
       sort(m.begin(),m.end());
        for(auto i:m){
            if(newm.empty()|| newm.back()[1] < i[0]){
                     newm.push_back(i);
            }else{
                 newm.back()[1]=max(newm.back()[1],i[1]);
            }
        }
        int ans=0;
        int diff=0;
      for(auto i:newm){
         cout<<diff;
         if(diff==0){
            diff=i[1];
         }
         else{
            ans+=i[0]-diff-1;
            diff=i[1];
         }
      }
      n=newm.size();
      ans+=newm[0][0]-1;
      ans+=days-newm[n-1][1];


      return ans;

    }
};