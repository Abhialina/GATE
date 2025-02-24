#include<stdio.h>
void main(){
    int count = 0;
    for(int i = 1; i <= 5; i++){
        for(int j = 1; j <= i; j++){
            printf("Hey ");
            //printf("* ");         Pattrn printing---->star triangle 
            //printf("%d ", j);     number printing
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}