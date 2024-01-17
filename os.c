// // //fcfs
//  #include<stdio.h>
// // int main(){
// //     int n,wt[20]={0},ct[30]={0},bu[30]={0};
// //     float atat=0,awat=0;
// //     printf("ente rther number of processor");
// //     scanf("%d",&n);
// //     for(int i =0;i<n;i++){
// //         scanf("%d",&bu[i]);
// //     }
// //     for(int i=0;i<n;i++){
// //         ct[i]=bu[i]+ct[i-1];
// //         wt[i]=ct[i-1];
// //     }
// //     for(int i=0;i<n;i++)
// //     {
// //        atat+=ct[i];
// //        awat +=wt[i];
// //     }
// //     printf("the average turn around time is %d\n",atat/n);
// //     printf("the average waiting time is %d\n",awat/n);
// //     printf(" processor\t burst time\t completion time\t wating time\t");
// //     for(int i=0;i<n;i++){
// //         printf("%d\t\t%d\t\t%d\t%d\n",i+1,bu[i],ct[i],wt[i]);
// //     } 




// // }
// // int main(){
// //     int n,p[10],bu[10],ct[10]={0},wt[10]={0};
// //     float atat,awt;
// //     printf("enter the number processor\n");
// //     scanf("%d",&n);
// //     for(int i=0;i<n;i++){
// //         p[i]=i;
// //         scanf("%d",&bu[i]);
// //     }
// //     for(int i=0;i<n-1;i++){
// //         for(int j=0;j<n-i-1;j++){
// //             if(bu[j]>bu[j+1]){
// //                 int temp;
// //                 temp=bu[j];
// //                 bu[j]=bu[j+1];
// //                 bu[j+1]=temp;
           
        
// //                temp=p[j];
// //                p[j]=p[j+1];
// //                p[j+1]=temp;
// //                 }
// //         }
// //     }
// //     for(int i=0;i<n;i++){
// //         ct[i]=bu[i]+ct[i-1];
// //         wt[i]=ct[i-1];
// //     }
// //     for(int i=0;i<n;i++){
// //         atat +=ct[i];
// //         awt +=wt[i];
// //     }
// // printf("the average turn around time is %f\n",atat/n);
// //     printf("the average waiting time is %f\n",awt/n);
// //     printf(" processor\t burst time\t completion time\t wating time\t\n");
// //     for(int i=0;i<n;i++){
// //         printf("%d\t\t%d\t\t%d\t%d\n",p[i],bu[i],ct[i],wt[i]);
// //     } 




// // }
// // int main(){
// //     int n,bu[10]={0},ct[10]={0},wt[10]={0},pr[10],p[10];
// //     float atat=0,awat=0;
// //     printf("enter the number of procee");
// //     scanf("%d",&n);
// //     printf("enter the burst time  and proriy\n");
// //     for(int i=0;i<n;i++){
// //         p[i]=i+1;
// //         printf("enter\n");
// //         scanf("%d%d",&bu[i],&pr[i]);

// //     }
// //   for(int j=0;j<n-1;j++){
// //     for(int i=0;i<n-1-j;i++){
// //         if(pr[i]>pr[i+1]){
// //             int temp;
// //           temp=pr[i];
// //           pr[i]=pr[i+1];
// //           pr[i+1]=temp;
         
// //          temp=bu[i];
// //          bu[i]=bu[i+1];
// //          bu[i+1]=temp;
         
// //          temp=p[i];
// //          p[i]=p[i+1];
// //          p[i+1]=temp;

// //         }
// //     }
// //   }
// // for(int i=0;i<n;i++){
// //   ct[i]=bu[i]+ct[i-1];
// //   wt[i]=ct[i-1];
// // }
// //   for(int i=0;i<n;i++){
// //         atat +=ct[i];
// //         awat+=wt[i];
// //     }
// // printf("the average turn around time is %f\n",atat/n);
// //     printf("the average waiting time is %f\n",awat/n);
// //     printf(" processor\tpriority\t burst time\t completion time\t wating time\t\n");
// //     for(int i=0;i<n;i++){
// //         printf("%d\t%d\t%d\t\t%d\t%d\n",p[i],pr[i],bu[i],ct[i],wt[i]);
// //     } 





// // }


// int main(){
// int i,j,n,bu[20]={0},wt[10]={0},tat[10]={0},ct[20],max,t;
// float avt=0,att=0,temp=0;
// printf("enter the number of process");
// scanf("%d",&n);
// for(i=0;i<n;i++){
//   scanf("%d",&bu[i]);
//   ct[i]=bu[i];
// }
// printf("enteer tjh time slic");
// scanf("%d",&t);
// max=bu[0];
// for(int i=1;i<n;i++){
//   if(max<bu[i]){
//     max=bu[i];
//   }
// }
// for(j=0;j<(max/t)+1;j++){
//  for(i=0;i<n;i++){
//   if(bu[i]!=0)
//   if(bu[i]<=t){
//        tat[i]=temp+bu[i];
//        temp=temp+bu[i];
//        bu[i]=0;
       
//   }
//   else{
//     temp=temp+t;
//     bu[i]=bu[i]-t;
//   }
//  }

// }
// for(int i=0;i<n;i++){
//   wt[i]=tat[i]-ct[i];
//   att +=tat[i];

// }
// for(int i=0;i<n;i++){
//   printf("%d\n",tat[i]);
// }

// }
#include<stdio.h>
#include<stdlib.h>
int mutex=1;
int full=0;
int empty=3;
int x=0;
void producer(){
  --mutex;
   ++full;
   --empty;
   x++;
   printf("producer produces the %d ",x);
  ++mutex;
}
void consumer(){
  --mutex;
  ++empty;
  --full;
  printf("the consumer consumes %d",x);
  x--;
  ++mutex;


}
int main(){
  int n,i;
  printf("ente rthe 1 for producer 2 for consumer 3 for exit");
  for(;;){
    printf("enter ur choice");
    scanf("%d",&n);
    switch(n){
      case 1:
       if((mutex==1) && (empty!=0)){
        producer();
       }
       else{
        printf("the bufer is full");
       }
      case 2:
       if(mute)
    
    
    }
  }
}


































