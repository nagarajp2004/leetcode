class Solution {
public:
   int  f(vector<int>&a,int k,int i)
   {
    int n=a.size();
    if(n==1){
        return a[0];
     }
    int j=(i+(k-1))%n;
    a.erase(a.begin()+j);
    return f(a,k,j);

   }
    int findTheWinner(int n, int k)
    {
        vector<int>vt(n,0);
        for(int i=1;i<=n;i++){
            vt[i-1]=i;
        }
        return f(vt,k,0);
    }
};