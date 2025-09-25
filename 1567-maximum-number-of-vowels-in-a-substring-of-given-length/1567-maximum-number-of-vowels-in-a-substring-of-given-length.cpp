class Solution {
public:
     bool check(char x){
        string vo="aeiou";
        if(vo.find(x)!=string::npos){
            return true;
        }
        return false;
     }

    int maxVowels(string s, int k) {
       
       int cnt=0;
       for(int i=0;i<k;i++){
        if(check(s[i])){
            cnt++;
        }
       }
     int ans=-1;
     ans=max(ans,cnt);
      int i=0,j=k;
     int n=s.size();
     while(j<n){
        if(check(s[j])){
            cnt++;
        }
        if(check(s[i])){
            cnt--;
        }
        i++;
        j++;
        ans=max(ans,cnt);
     }
return ans;
    }
};