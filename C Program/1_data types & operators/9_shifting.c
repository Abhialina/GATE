#include<stdio.h>
void main(){
    int a = 5, b, c;
    b = a << 1;     //left shift 5, 1 times
    printf("%d\n", b);

    c = a >> 1;
    printf("%d", c);
}