class Solution {
public:
    int timeRequiredToBuy(vector<int>& tic, int k) {
        
        int count =0;
        queue<int>q;
      
       int n=tic.size();

       for(auto i:tic){
        q.push(i);
       }

       while(!q.empty()){
         int x=q.front();
         q.pop();
         x--;
         count++;
         if(x==0 && k==0){
            return count;
         }
         if(k==0){
            k=(q.size());
         }else{
            k=k-1;
         }
         if(x!=0){
            q.push(x);
         }
       }
       return count;

    }
};