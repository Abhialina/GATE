#include<stdio.h>
#include<math.h>
void main(){
    int n,count = 0;
    printf("Enter number : ");
    scanf("%d", &n);
    if(n == 0){
        printf("%d", count = 1);
    }
    else{
        count = log10(n) + 1;
    printf("%d", count);
    }
}