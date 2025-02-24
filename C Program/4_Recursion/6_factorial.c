#include<stdio.h>
int fact(int n){
    if(n == 0){
        return 1;
    }
    else{
        return n * fact(n - 1);
    }
}
void main(){
    int x;
    printf("Enter No. : ");
    scanf("%d", &x);

    int result = fact(x);
    printf("Factorial of %d is : %d", x, result);
}