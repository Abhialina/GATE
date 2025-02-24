#include<stdio.h>
void main(){
    int n, i = 0, count = 0;
    printf("Enter no. : ");
    scanf("%d", &n);

    if(n != 0){
        while(n > 0){
        n = n / 10;
        count++;
    }
    printf("%d", count);
    }
    else{
        count = 1;
        printf("%d", count);
    }
}