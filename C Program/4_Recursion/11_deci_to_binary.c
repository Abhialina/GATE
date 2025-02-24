#include<stdio.h>
void f(int n){
    if(n == 0 || n == 1){
        printf("%d", n);
        return;
    }
    f(n / 2);
    printf("%d", n % 2);
}
void main(){
    int n;
    printf("Enter Decimal number : ");
    scanf("%d", &n);

    f(n);
} 