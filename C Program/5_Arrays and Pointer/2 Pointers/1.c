#include<stdio.h>
void main(){
    int x = 10;
    int *p;
    p = &x;
    printf("%d\n", x);
    printf("%u\n", &x);
    printf("%u\n", p);
    printf("%d\n", *p);

}
