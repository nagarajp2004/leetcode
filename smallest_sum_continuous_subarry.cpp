#include<iostream>
using namespace std;
int main(){
    int mini=0,sum=0;
    int a[20]={3,-4,2,-3,-1,7,-5};
    for(int i=0;i<7;i++){
           
        sum+=a[i];
        if(sum>0){
            sum=0;
        }
        if(sum>a[i]){
            sum=a[i];
        }
        mini=min(sum,mini);
    }
    cout<<mini;
}