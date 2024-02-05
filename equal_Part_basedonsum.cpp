#include<iostream>
#include<vector>
using namespace std;
int check_equal_sum_bru(vector<int>a){

    int n=a.size();
    for(int i=0;i<n-1;i++){
       int sum1=0,sum2=0;
       for(int j=0;j<=i;j++){
          sum1+=a[j];
       }
       for(int j=i+1;j<n;j++){
        sum2+=a[j];
       }
       if(sum1==sum2){
        return 1;
        break;
       }
    }
    return 0;
}
int check_equal_sum_opti1(vector<int>a){
    int sum=0,sval=a[0];
    for(int i=0;i<a.size();i++){
       sum+=a[i];
    }
    for(int i=1;i<a.size();i++){
       if(sum-sval==sval)
        return 1;
       else{
            sval=sval+a[i];
        }

    }
    return 0;
}
int main(){
    vector<int>a={2,3,6,4,2,5,6};
     cout<< check_equal_sum_opti1(a);
}