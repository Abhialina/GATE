#include<stdio.h>
int f(int n){
    if(n <= 1){
        return n;
    }
    if(n % 2){
        return f(n / 2) + n;
    }
    return f(n / 3) + n;
}
void main(){
    int result = f(22);
    printf("%d", result);
}