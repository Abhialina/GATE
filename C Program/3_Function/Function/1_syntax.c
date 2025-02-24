#include<stdio.h>
int New(int, int);              //forward declaration
void main(){
    int a, b;
    printf("Enter a : ");
    scanf("%d", &a);
    printf("Enter b : ");
    scanf("%d", &b);

    int Ans = New(a, b);            //function call

    printf("Sum of %d and %d is %d", a, b, Ans);
}
int New(int x, int y){              //code definition
    int temp;
    temp = x + y;
    return temp;
}