class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& d) {

     unordered_map<int,int>mpp;

     for(int i=0;i<d.size();i++){
        mpp[d[i]]++;
     }
     vector<int>vt;
     
     
     for(int i=1;i<=9;i++)
     {
           if(mpp[i]==0){
             continue;
           }
           mpp[i]--;
           for(int j=0;j<=9;j++)
           {
              if(mpp[j]==0)
              {
                continue;
              }
              mpp[j]--;
              for(int z=0;z<=9;z=z+2){
                  if(mpp[z]==0){
                    continue;
                  }
                  mpp[z]--;
                  vt.push_back(i*100+j*10+z);
                 mpp[z]++;   
              }
              mpp[j]++;
           }
           mpp[i]++;
     }
     return vt;

    }
};