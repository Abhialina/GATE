#include<stdio.h>
void f(int n){
    if(n > 0){
        printf("%d ", n);
        f(n - 1);
    }
}
void main(){
    f(5);
}