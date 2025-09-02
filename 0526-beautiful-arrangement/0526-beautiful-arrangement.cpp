class Solution {
public:
    int f(int pos,int n,vector<bool>&used){
        if(pos>n){
            return 1;
        }
        int count=0;

        for(int i=1;i<=n;i++){
            if(!used[i] && (pos%i==0||i%pos==0)){
                used[i]=true;
                count+=f(pos+1,n,used);
                used[i]=false;
            }
        }
        return count;
    } 

    int countArrangement(int n) 
    {
       vector<bool>used(n+1,false);
       return f(1,n,used);
    }
};