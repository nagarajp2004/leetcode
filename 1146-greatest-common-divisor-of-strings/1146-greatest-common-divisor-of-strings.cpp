class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        if(str1+str2 !=str2+str1){
            return "";
        }
        int len=gcd(str2.size(),str1.size());
        return str1.substr(0,len);
    }
  int gcd(int a,int b){
     if(b==0)
       return a;
    return  gcd(b,a%b);  
  }

};