class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& in)
     {
        sort(in.begin(),in.end(),[](vector<int>&a ,vector<int>&b){
            return a[1]<b[1];
        });
        int last=in[0][1];
        int count=0;
        for(int i=1;i<in.size();i++){
             if(in[i][0]>=last){
             last=in[i][1];
             }
             else{
              count++;

             }
          
        }
        return count;
    }
};