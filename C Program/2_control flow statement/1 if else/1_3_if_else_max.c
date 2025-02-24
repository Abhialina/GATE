#include<stdio.h>
void main(){
    int a, b, max;
    printf("Enter no. : ");
    scanf("%d", &a);
    printf("Enter no. : ");
    scanf("%d", &b);
    if(a > b){
        printf("%d is Greater than %d", a, b);
    }
    else if(b > a){
        printf("%d is Greater than %d", b, a);
    }
    else{
        printf("%d and %d both are Equal", a, b);
    }
}