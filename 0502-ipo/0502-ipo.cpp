class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& p, vector<int>& c) {
       vector<pair<int,int>>proj;

       for(int i=0;i<p.size();i++){
         proj.emplace_back(c[i],p[i]);
       } 
       sort(proj.begin(),proj.end());


     int i=0;
     int n=p.size();
        priority_queue<int>maxi;

       for(int j=0;j<k;j++){

         while(i<n && proj[i].first<=w){
           maxi.push(proj[i].second);
           i++;
         }
         if(maxi.size()==0){
            break;
         }
         w+=maxi.top();
         maxi.pop();
       }
       return w;
    }
};