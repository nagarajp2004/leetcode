#include <stdio.h>
#define max 25

int main(){
    int b[max], f[max], nb, nf, highest = 0;
    static int bf[max], ff[max];
    
    printf("the memory management is worst fit\n");
    printf("number of blocks: ");
    scanf("%d", &nb);
    printf("number of files: ");
    scanf("%d", &nf);
    
    printf("enter the size of blocks:\n");
    for(int j = 1; j <= nb; j++){
        scanf("%d", &b[j]);
    }
    
    printf("enter the size of the files:\n");
    for(int j = 1; j <= nf; j++){
        scanf("%d", &f[j]);
    }
    
    for(int i = 1; i <= nf; i++){
        for(int j = 1; j <= nb; j++){
            if(bf[j] != 1){
                int temp = b[j] - f[i];
                if(temp >= 0 && highest < temp){
                    ff[i] = j;
                    highest = temp;
                }
            }
        }
        bf[ff[i]] = 1; 
        highest = 0;
    }
    
    printf("\nFile_no:\tFile_size:\tBlock_no:\tBlock_size:\n");
    for(int i = 1; i <= nf; i++){
        printf("%d\t\t%d\t\t%d\t\t%d\n", i, f[i], ff[i], b[ff[i]]);
    }

    return 0;
}
