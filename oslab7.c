#include<stdio.h>
void main(){
    int i,j,k,f,pf=0,count=0;
    int rs[25],m[10],n;
    printf("etner the length of the reference strinbg\n");
    scanf("%d",&n);
    for(int i=0;i<n;i++){
     scanf("%d",&rs[i]);
    }
    printf("etner the numbrer of fram");
    scanf("%d",&f);
    for(int i=0;i<f;i++){
        m[i]=-1;
    }
    printf("the paghe replacwemnt process\n");
    for(int i=0;i<n;i++){
        for(int j=0;i<f;j++){
            if(m[j]==rs[i]){
                break;
            }
            }
            if(j==f){
                m[count++]=rs[i];
                pf++;
                printf("\tPF No. %d",pf);
            }
            for(k=0;k<f;j++){
                printf("%d\t",m[j]);
            }
            if(count==f){
                count=0;
            }

            
        }
        printf("the number of paGE FAULT IS %d",pf);
    }

