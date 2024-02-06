#include<stdio.h>
int issorted(int *a,int n)
{
    
if(n==0||n==1){
    return 1;
}
if(a[0]>a[1]){
    return 0;
}
else{
    return issorted(a+1,n-1);
}


}
int main(){

int a[10]={1,2,3,4,5,6};
printf("%d",issorted(a,6));
}