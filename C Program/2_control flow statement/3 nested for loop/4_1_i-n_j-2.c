#include<stdio.h>
void main(){
    int n = 10, count = 0;
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j = j + 2){          //kidddo print--->n*n/2 times = 10 * 10/2 = 50times
            printf("Kiddo");
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}