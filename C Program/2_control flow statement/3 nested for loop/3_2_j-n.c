#include<stdio.h>
void main(){
    int n = 10, count = 0;
    for(int i = 1; i <= 10; i++){
        for(int j = 1; j <= n; j++){            //loop print nx10 times---->100x10=1000times
            printf("Hey ");
            count++;
        }
       printf("\n");
    }
    printf("%d", count);
}