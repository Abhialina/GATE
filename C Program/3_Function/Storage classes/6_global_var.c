#include<stdio.h>
int x = 0;
void f(){
    ++x;
    printf("%d ", x);
}
void g(){
    ++x;
    printf("%d ", x);
}
void h(){
    ++x;
    printf("%d", x);
}
void main(){
    f();
    g();
    h();
}
//int x = 0;                global variable created anywhere in code, in the begining or in the end