#include<iostream>
using namespace std;
 class bank_emp{
   string name;
   int acc,balance;
   public:
    bank_emp(string n,int a,int b){
        name=n;
        acc=a;
        balance=b;
    }
    void deposit(int amount){
        if(amount>0){
            balance=+amount;
            cout<<"sucessful";
        }
        else{
            throw " the amount must be graeter than zero ";
        }
    }
    void withdraw(int amount){
        if(amount>0&&amount<=balance){
            balance-=amount;
            cout<<"withdraw  is sucessful";
        }
        else{
            throw "the amount must be present in  the account";
        }
    }

 };
int main(){
 bank_emp b1("nagaraj",1111,37);
 try{
   
    b1.withdraw(1000);
 }
 catch( const char*s)
 {
     cout << "execption is handled"<<s;
 }


}