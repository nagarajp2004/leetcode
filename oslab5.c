#include<stdio.h>
struct file{
    int all[10];
    int max[10];
    int need[10];
    int flag;
};

void main(){
    struct file f[10];
    int fl;
    int aval[10],seq[10];
    int i,j,k,p,b,n,r,g,cnt=0,id,newr;
    printf("etnr the number of processor\n");
    scanf("%d",&n);
    printf("etnr the number of resource\n");
    scanf("%d",&r);
    for(int i=0;i<n;i++){
        printf("ente rhe details for process %d",i);
        printf("etner the allocated \n");
        for(j=0;j<r;j++){
            scanf("%d",&(f[i].all[j]));
        }
        printf("etner the max for that process\n");
        for(j=0;j<r;j++){
          scanf("%d",&f[i].max[j]);
        }
        f[i].flag=0;
    }
    printf("etnter the available resource \n");
    for(int i=0;i<r;i++){
        scanf("%d",&aval[i]);
    }
    for(i=0;i<n;i++){
        for(j=0;j<r;j++){
            f[i].need[j]=f[i].max[j]-f[i].all[j];
            if(f[i].need[j]<0){
                f[i].need[j]=0;
            }

        }
    }
cnt=0;fl=0;
while(cnt!=n){
    g=0;
    for(j=0;j<n;j++){
      
      if(f[j].flag==0){
        b=0;
        for(p=0;p<r;p++){
            if(aval[p]<=f[j].need[p]){
                b=b+1;
            }
            else{
                b=b-1;
            }
        }
        if(b==r){
            printf("P %d is vised",j);
            seq[fl++]=j;
            f[j].flag=1;
            for(k=0;k<r;k++){
                aval[k]=aval[k]+f[j].all[k];
            }
            cnt++;
            printf("(");
            for(k=0;k<r;k++){
                printf("%d",aval[k]);
            }
            printf(")");
            g=1;
        }
      }
    }
   if(g==0){
    printf("the request is not greanted  dead lock as occured\n");
    printf("the system is unsafe state\n");
    goto Y;
   }
}
printf("the system is in the safe sequence\t");
printf("the safe sequence is \n");
for(int i=0;i<fl;i++){
    printf("p%d",seq[i]);
}
Y:
 printf("\n processor\t allocation \t\t max\t\tneed\n");
 for(int i=0;i<n;i++){
    printf("p%d",i);
    for(int j=0;j<r;j++){
        printf("%6d",f[i].all[j]);
    }
    for(j=0;j<r;j++){
        printf("%6d",f[i].max[j]);
    }
    for(j=0;j<r;j++){
        printf("%6d",f[i].need[j]);
    }
    printf("\n");
 }
 }




