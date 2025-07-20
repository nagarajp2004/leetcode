class Solution {
  public:
    // Function to find the maximum number of meetings that can
    // be performed in a meeting room.
    int maxMeetings(vector<int>& s, vector<int>& e) {
        // Your code here
        
        vector<pair<int,int>>vt;
        for(int i=0;i<s.size();i++){
            vt.push_back({e[i],s[i]});
        }
        sort(vt.begin(),vt.end());

         int count=0;
         
        vector<pair<int,int>>ans; 
         ans.push_back(vt[0]);
         
        for(int i=1;i<s.size();i++)
        {
              if(ans.back().first < vt[i].second){
                  ans.push_back(vt[i]);
              }
        }
        return ans.size();
    }
};