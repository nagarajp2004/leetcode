class Solution {
public:
    int countStudents(vector<int>& st, vector<int>& sand) {
        
        int i=0;
        int n=sand.size();

        queue<int>q;
        for(auto i: st){
            q.push(i);
        }
   
    
       int count=n;
       int s=1;
       while(count!=q.size() || s ){
         count =q.size();
         for(int j=0;j<count;j++){
            if(sand[i] == q.front()){
                 i++;
                 q.pop();
            }else{
                q.push(q.front());
                q.pop();
                
            }
         }
         s=0;
       }
       return q.size();
    }
};