#include<iostream>
using namespace std;
#include<string>
int main(){
    string s={"hi i am nagaraj"};
   string temp="";
   string ans="";
    int first=0;
    int end=s.size();
     while(first<end){
         char ch=s[first];
         if(ch!=' '){
             temp=temp+ch;
         }
         else if(ch==' '){
             if(!temp.empty()){
                 ans=temp+' '+ans;
                 temp="";
             }
         }
         first++;
}
ans=temp+' '+ans;
cout<<ans;
}