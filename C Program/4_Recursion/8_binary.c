#include<stdio.h>
void f(int n){
    if(n == 0){
        return;
    }
    f(n / 2);
    printf("%d", n % 2);
}
void main(){
    int x;
    printf("Enter Decimal Number : ");
    scanf("%d", &x);
    f(x);
}
