class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int g) {
        if(hand.size() % g !=0){
          return false;
        }
        map<int,int>mpp;
        for(auto i:hand){
            mpp[i]++;
        }
      
      while(!mpp.empty()){
        int card=mpp.begin()->first;
       
        for(int i=0;i<g;i++)
        {
           int need=card+i;
        
           if(mpp.find(need)==mpp.end()){
             
            return false;
           }
           mpp[need]--;
           
           if(mpp[need]==0){
            mpp.erase(need);
           }
        }
        
        }    
     return true; 

    }
};