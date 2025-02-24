#include<stdio.h>
int power(int x, int y){
    if(y == 0){
        return 1;
    }
    else{
        return x * power(x, y-1);
    }
}
void main(){
    int a, b;
    printf("Enter Base : ");
    scanf("%d", &a);
    printf("Enter Exponent : ");
    scanf("%d", &b);

    int result = power(a, b);
    printf("%d to the Power %d is : %d", a, b, result);
}