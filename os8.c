#include<stdio.h>
#include <stdlib.h>
#include <string.h>
#define max_files 10
#define max_filename_length 10
char direct[max_filename_length];
char filenames[max_files][max_filename_length];
int filecount=0;
void create(){
    if(filecount<max_files){
     scanf("%s",filenames[filecount]);
    printf("the file %s is created",filenames[filecount]);
     filecount++;
}else{
  printf("directory i s full\n");
}}

void delete(){
    if(filecount==0){
        printf("the directory is mepty");
        return;
    }
    int found=0;
    char fil[max_filename_length];
    printf("etner the file to delete\n");
    scanf("%s",fil);
    for(int i=0;i<filecount;i++){
        if(strcmp(fil,filenames[filecount])==0){
            printf("the file is found \n");
            printf("dleted\n")
             strcpy(filenames[i],filenames[filecount-1]);
             filcount--;
             return ;
        }
    }
    printf("file is not found\n");
}






int main(){
     
}
