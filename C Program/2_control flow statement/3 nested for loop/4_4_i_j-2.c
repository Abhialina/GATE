#include<stdio.h>
void main(){
    int n = 8, count = 0;
    for(int i = 1; i <= n; i = i * 2){
        for(int j = 1; j <= n; j = j * 2){          //[1 + log2(n)]^2---->[4]^2 = 16times
            printf("Scotchy ");
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}