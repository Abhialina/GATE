#include<stdio.h>
int fun(int *p, int n){
    int i, sum = 0;
    for(i = 0; i < 4; i++){
        sum = sum + p[i];
    }
    return sum;
}
void main(){
    int n,sum;
    int arr[] = {10, 20, 30, 40};
    n = sizeof(arr) / sizeof(int);
    sum = fun(arr, n);
    printf("Sum is %d", sum);
}