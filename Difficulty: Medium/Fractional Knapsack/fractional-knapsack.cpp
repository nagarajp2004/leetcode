// class implemented
/*
struct Item{
    int value;
    int weight;
};
*/

class comp{
    
};


class Solution {
  public:
 
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
    
        
        vector<pair<int,int>>vt;
        
        for(int i=0;i<wt.size();i++)
        {
            vt.push_back({val[i],wt[i]});  
        }
       sort(vt.begin(), vt.end(), [](pair<int, int> &a, pair<int, int> &b) {
    return (double)a.first / a.second > (double)b.first / b.second;
    });
    
       int i=0;
       double sum=0;
       for(;i<val.size();i++){
           if(vt[i].second <capacity){
               sum+=vt[i].first;
               capacity-=vt[i].second;
           }else{
               break;
           }
       }
       
       if(i<val.size()){
          sum += (double)vt[i].first * capacity / vt[i].second;

       }
       return sum;
       
    }
};
