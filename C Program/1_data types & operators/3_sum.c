#include<stdio.h>
void main(){
    int a,b,c;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    c = a + b;
    printf("Sum of %d and %d is %d.", a, b, c); 
}