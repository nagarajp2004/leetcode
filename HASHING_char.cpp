#include<string.h>
#include<iostream>
using namespace std;
int main()
{
    string a;
    cout<<" enter the string ";
    cin>>a;

//hashing
int hash[26]={0};
for(int i=0;i<a.size();i++){
    hash[a[i]-97]+=1;
}

cout<< "etner the number of query";
int q;
cin>>q;
for(int i=0;i<q;i++){
    char a;
    cin>> a;
    cout<<hash[a-'a' ]<<endl;
}

}