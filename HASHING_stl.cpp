#include<iostream>
#include<map>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
map<int,int>mpp;
for(int i=0;i<n;i++){
    mpp[a[i]]++;
}
//iterate over the map;
for(auto it:mpp){
    cout<< it.first<<"->"<<it.second<<endl;
}

// int q;
// cout<<"enter the number of query \n";
// cin>>q;
// while(q--){
//     int n;
//     cin>>n;
//     cout<<mpp[n];

// }

}