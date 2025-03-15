class Solution {
public:
    int trap(vector<int>& h)
    {
       int n=h.size();
      vector<int>pre(n,0);
      vector<int>suc(n,0);
        pre[0]=h[0];
      for(int i=1;i<n;i++){
        pre[i]=max(pre[i-1],h[i]);
      }
      suc[n-1]=h[n-1];
       for(int i=n-2;i>=0;i--){
         suc[i]=max(suc[i+1],h[i]);
       }
   int w=0;
   for(int i=0;i<n;i++)
   {
      w+=(pre[i]<=suc[i])?(pre[i]-h[i]):(suc[i]-h[i]);
   }
   return w;
    }
};