#include<iostream>
using namespace std;
int main(){
   string a;
   cin>>a;
   int x=0,y=a.size()-1;
   while(x<y){
    swap(a[x],a[y]);
    x++;
    y--;
   }
   cout<<a;

}