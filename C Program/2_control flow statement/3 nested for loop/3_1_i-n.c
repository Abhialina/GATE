#include<stdio.h>
void main(){
    int n = 10, count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 10; j++){       
            printf("Scotchy ");
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}