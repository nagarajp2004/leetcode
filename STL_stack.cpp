#include<stack>
#include<iostream>
using namespace std;


int main(){
    stack<int>s;
    s.push(6);
    s.push(33);
    s.push(44);
    s.pop();
    s.top();
    cout<< s.size()<<endl;
}