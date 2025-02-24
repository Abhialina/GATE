#include<stdio.h>
void main(){
    int n = 8, count = 0;
    for(int i = 1; i <= n; i = i * 2){      //n[1 + log2(n)]---->8[1 + 3] = 32
            for(int j = 1; j <= n; j++){
            printf("Scotchy ");
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}