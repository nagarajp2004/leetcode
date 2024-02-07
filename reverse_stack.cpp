#include<stack>
#include<iostream>
using namespace std;
int main(){
    stack<char>a;
    string b;
    cin >> b;
    for(int i=0;i<b.size();i++){
        a.push(b[i]);

    }
    int i=0;
    while(!a.empty()){
        b[i++]=a.top();
        a.pop();
    }
    cout<<b;
}