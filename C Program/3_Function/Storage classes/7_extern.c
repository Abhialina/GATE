#include<stdio.h>
void f(){
    extern int x;
    ++x;
    printf("%d ", x);
}
int x = 0;
void g(){
    ++x;
    printf("%d ", x);
}
void main(){
    f();
    g();
    ++x;
    printf("%d", x);
}