#include<stdio.h>
void main(){
    int n = 10, count = 0;
    //printf("Enter no. : ");
    //scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= i; j++){            //n(n/2) times print Quackk...
            printf("Quackk ");
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}