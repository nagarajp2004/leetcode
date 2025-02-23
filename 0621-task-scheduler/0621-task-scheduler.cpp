class Solution {
public:
    int leastInterval(vector<char>& tasks, int n)
    {
       map<char,int>mpp;
           int maxi=0;
        for(char i:tasks){
            mpp[i]++;
            maxi=max(maxi,mpp[i]);
        }
   
       int count=0;
   
       for(auto i:mpp){
        if(i.second==maxi){
            count++;
        }
       }
       int min_size=((maxi-1)*(n+1))+count;
      int y=tasks.size();
       int x=max(y,min_size);
       return x;

    }
};