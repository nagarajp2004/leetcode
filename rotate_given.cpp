#include<iostream>
#include<vector>
using namespace std;
int main(){
int ele;
int n;
cout << "enter the elements of array";
cin>> n;
vector<int>temp(n,0);
for(int i=0;i<n;i++){
    cin >> ele;
    temp.push_back(ele);
    cout << '\n';
    cout << temp.front();
    if(i=n-1){
    
    cout << temp.back();
    
    }    
   
}






}