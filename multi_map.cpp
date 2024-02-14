#include <bits/stdc++.h>///i am trying to sort the map based on the keys so i am using multimaping
using namespace std;
int main(){
    map<string,int>m;
    m["hi"]=1;
    m["nagaraj"]=3;
    m["am"]=2;
multimap<int,string>mm;
 for(auto& it:m){
    mm.insert({it.second,it.first});
 }


 for(auto& i:mm){
    cout<<i.second<<" "<<i.first;
 }
}