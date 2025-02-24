#include<stdio.h>
void f(int n){
    if(n > 0){
        f(n - 1);
        printf("%d", n);
        f(n - 1);
        printf("%d", n);
    }
}
void main(){
    f(3);
}