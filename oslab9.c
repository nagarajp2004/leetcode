#include<stdio.h>
#include<stdlib.h>
int main(){
    int f[50]={0},fn=0,str,len;
   x: 
    fn=fn+1;
    printf("enter hte starting index and len\n");
    scanf("%d%d",&str,&len);
    if(f[str]==0){
        
        for(int j=str;j<(str+len);j++){
            if(f[j]==0){
            f[j]=fn;
            printf("%d---->%d",j,fn);
        } else{
        printf("%d block is allready occupied\n",str);
        len++;
       }
        
        }
    }
    else{
        printf("the starting block is occupiesd");
    }
    printf("do u want to enter more files press 1 for yes 0 for no");
    int ch;
    scanf("%d",&ch);
    if(ch==1){
        goto x;
    }
    else{
        exit(0);
    }

   
}