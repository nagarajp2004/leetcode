class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
       int n=points.size();
       if(n<=2) return n;

       int maxi=1;

       for(int i=0;i<n-1;i++){
         map<double,int> slp;

         for(int j=i+1;j<n;j++){
            int dx=points[j][0]-points[i][0];
            int dy=points[j][1]-points[i][1];
            double slope;
                if (dx == 0) {
                    slope = DBL_MAX;  // Use a very large value to represent vertical slope
                } else {
                    slope = (double)dy / dx;
                }
          slp[(slope)]++;    
         }
       int cur=1;
       for(auto i:slp){
        cur=max(cur,i.second+1);
       }
      maxi=max(maxi,cur);
       }
return maxi;
    }
};