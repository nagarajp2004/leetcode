class Solution {

public:
 void recur(string s,int i,long long& x,int sign)
 {
    if(s.size()==i || !isdigit(s[i])){
        return;
    }
   x=x*10+((s[i]-'0'));
    if((x*sign)<=INT_MIN){
        x=INT_MIN;
        return ;
    }
    if(x>=INT_MAX){
        x=INT_MAX;
        return;
    }
    recur(s,i+1,x,sign);
 }

    int myAtoi(string s) {

   int i=0;
      while(s[i]==' '){
        i++;
      }  
  int sign=1;
    if(s[i]=='-')
    {
        sign=-1;
        i++;
    }else if(s[i]=='+')
    {
         i++;
    }
    long long x=0;
    recur(s,i,x,sign);
    if(sign==-1){
        return -1*x;
    }
    return x;

    }

};