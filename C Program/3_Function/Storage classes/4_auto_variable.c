#include<stdio.h>
void f(){
    int a = 0;           
    ++a;
    printf("%d ", a);
}
void main(){
    f();
    f();
    f();
}