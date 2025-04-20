class Solution {
public:
    void recur(string s,long long& x,int i,int n,int sign){
        if(i>=n || !isdigit(s[i])){
            return ;
        }
        x=x*10+(s[i]-'0');
     
        if((x*sign) <= INT_MIN){
           x=INT_MIN;
            return ;
        }
        else if((x*sign) >= INT_MAX){
            x=INT_MAX;
            return ;
        }
       recur(s,x,i+1,n,sign);
    }
    int myAtoi(string s) 
    {
      int n=s.size();
      int i=0;
      long long x=0;
      while(i<n && s[i]==' '){
        i++;
      }  
    
      int sign=1;  
      if(s[i]=='-'){
        sign=-1;
        i++;
      }else if(s[i]=='+'){
        i++;
      }
     
      recur(s,x,i,n,sign);
      if(x!=INT_MIN){
        return x*sign;
      }
 return x;
    }

};