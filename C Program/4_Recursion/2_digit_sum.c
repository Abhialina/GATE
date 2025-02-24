#include<stdio.h>
int sum(int n){
        if(n >= 1 && n <= 9){
            return n;
        }
        else{
            return (n % 10) + sum(n/10);
        }
}
void main(){
    int x;
    printf("Enter Number : ");
    scanf("%d", &x);

    int result = sum(x);
    printf("Sum of all digits of %d is : %d", x, result);
}