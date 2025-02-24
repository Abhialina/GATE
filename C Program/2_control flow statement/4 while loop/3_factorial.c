#include<stdio.h>
void main(){
    int n, i = 1;
    printf("Enetr no. : ");
    scanf("%d", &n);

    int fact = 1;
    while(i <= n){
        fact *= i;
        i++;
    }
    printf("Factorial of %d is : %d", n, fact);
}