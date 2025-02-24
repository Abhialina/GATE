#include<stdio.h>
void f(){
    static int i = 0;           //storagev area--- data segment
    ++i;
    printf("%d ", i);
}
void main(){
    f();
    f();
    f();
}