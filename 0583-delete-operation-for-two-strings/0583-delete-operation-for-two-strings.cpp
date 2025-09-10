class Solution {
  public:
     int f(int i,int j,string w1,string w2){
        if(i<0 || j<0){
            return 0;
        }
        if(w1[i]==w2[j]){
            return 1+ f(i-1,j-1,w1,w2);
        }
        return max(f(i-1,j,w1,w2) ,f(i,j-1,w1,w2));
     }
   
    int minDistance(string w1, string w2) {
        int n1=w1.size();
        int n2=w2.size();
        int sum=n1+n2;
        return  sum-f(n1-1,n2-1,w1,w2)*2;
    }
};