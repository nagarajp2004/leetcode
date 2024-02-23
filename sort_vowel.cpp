#include<vector>
#include<iostream>
using namespace std;
int main(){
   string s;
   cin>>s;
   vector<int>upper(26,0);
   vector<int>lower(26,0);
   for(int i=0;i<s.size();i++){
    if(s[i]=='A'||s[i]=='E'||s[i]=='O'||s[i]=='I'||s[i]=='U'){
        upper[s[i]-'A']++;
        s[i]='#';
    }
   }
    for(int i=0;i<s.size();i++){
    if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u'){
        lower[s[i]-'a']++;
        s[i]='#';
    }
   }
   string ns;
   for(int i=0;i<26;i++){
    char c=i+'A';
    while(upper[i]){
        ns=ns+c;
        upper[i]--;
    }
   }
   for(int i=0;i<26;i++){
    char c=i+'a';
    while(lower[i]){
        ns=ns+c;
        lower[i]--;
    }
   }
   int j=0;
   for(int i=0;i<s.size();i++){
    if(s[i]=='#'){
       s[i]=ns[j];
       j++;
    }
   }
 cout<<s;
}