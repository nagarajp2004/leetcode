#include<unordered_map>
#include<iostream>
using namespace std;
int ispalindrom(string s){
  unordered_map<char,int>a;
  for(auto i:s){
    a[i]++;
  }
  int ans=0,odd=0;
  for( auto i:a){
     if(i.second%2==0){
         ans+=i.second;
     }
     else{
        ans+=i.second-1;
        odd=1;
     }

  }
  if(odd){
    ans+=1;
  }
  return ans;
}
int main(){
    string s;
    cin>>s;
    cout<<ispalindrom(s);
    
}     