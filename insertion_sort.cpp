#include<iostream>
using namespace std;
#include<vector>
int main(){
    vector<int>x={4,2,5,1,0,8};
    int j=0;
    for(int i=0;i<x.size();i++){
        j=i;
        for(;j>0;j--){
            if(x[j]<x[j-1]){
                swap(x[j],x[j-1]);
            }
        }
    }
    for(auto i:x){
        cout<<i<<" ";
    }
}