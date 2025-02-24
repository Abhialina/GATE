#include<stdio.h>
void main(){
    int a = 2, b = 2, c = 0, d = 2, e;
    e = a-- && b-- && ++c || d++;
    printf("%d %d %d %d %d", a,b,c,d,e);
}