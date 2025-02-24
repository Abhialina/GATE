#include<stdio.h>
void main(){
    int n = 5, count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){            //Quackk print---->n*n times = 100*100 = 10000
            printf("Quackk");
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}