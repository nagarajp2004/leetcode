#include<iostream>
using namespace std;////trying new method
#include<unordered_map>
#include<string>
int main(){
    string str[]={"i am don"};
    unordered_map<string ,int>x;
		 string a;
		 int q=1;
		 for(int i=0;i<str.size();i++)
		 {
         a=a+str[i];
		 if(str[i]==' '){
			 x[a]=q++;
			 a.clear();
		 } 
   
		 }
	for(auto j: x){
		a=a+j.first;
	}	 
}