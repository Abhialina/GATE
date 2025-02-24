#include<stdio.h>
void main(){
    int n = 5, count = 0;
    //printf("Enter no. : ");
    //scanf("%d", &n);
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 3 * i; j++){            //3+5+7+...+(2n+1)---> n(n + 2) times Scotchy print
            printf("Scotchy ");
            count++;
           //printf("%d", j);
            //printf("* ");
            //printf("%d", i);
        }
        printf("\n");
    }
    printf("%d", count);
}