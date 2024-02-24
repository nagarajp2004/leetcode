//so happy i completd with not optimised and took 2 hrs and i will improve 
// love c++
#include<math.h>
#include<stack>
#include<iostream>
using namespace std;
int main(){
    string f={"i told u to enter n1>n2"};
    string n1,n2;
    stack<int>s;
    cin>>n1;
    cin>>n2;
    int x,y=0,z;
    if(n1.size()>n2.size()){
        int i=n1.size()-1;
        int j=n2.size()-1;
        int n=n1.size()-n2.size();
        for(;i>=0 && j>=0;i--,j--){
             x= (n1[i]-'0')+(n2[j]-'0')+y;
            if(x>9){
            y=x/10;
            z=x%10;
            s.push(z);
            }
            else{
              
                s.push(x);
            }

        }
         
 
       x=n-1;    
       int number=0;
        for(int i=0;i<n;i++){
         number+=(n1[i]-'0')*pow(10,x);
      
         if(y>0){
            number+=y;
         }
        }
        cout<<number;
      
    while(!s.empty()){
         cout<<s.top();
      s.pop();}

      } 
      else{
        try{
        throw(f);
      }
      catch(string f){
         cout<<f;
      }}
    }
