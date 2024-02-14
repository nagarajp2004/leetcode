#include<vector>
#include<iostream>
using namespace std;
int main(){
    vector<string>x;
    string a,b;
    getline(cin,a);
    for(int i=0;i<a.size();i++){
       if(a[i]=='.'){
        x.push_back(b);
        b.clear();
        continue;
       }
       b+=a[i];
    }
    for(int i=0;i<x.size();i++){
        cout<<x[i]+"[.]";
    }
}