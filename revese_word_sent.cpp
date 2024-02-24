#include<iostream>
#include<vector>
using namespace std;

void reverse_word(string s){
    vector<string>a;
    string q;
    for(auto i:s){
        if(i==' '){
            a.push_back(q);
            q.clear();
        }
        else{
          q +=i;
        }
    }
    a.push_back(q);
    s.clear();
    
    for(int i=a.size()-1;i>=0;i--){
          s=s+' '+a[i];
    }
cout<<s;
   

}


int main(){
    string s;
    getline(cin,s);
    reverse_word(s);
  

}