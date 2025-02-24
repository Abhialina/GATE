#include<stdio.h>
void main(){
    int n = 8, count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j = j * 2){
            printf("Quackk ");
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}