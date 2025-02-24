#include<stdio.h>
void main(){
    int x = 10;
    int *p;
    int **q;
    p = &x;
    q = &p;


    printf("%d\n", x);
    printf("%u\n", &x);
    printf("%d\n", p);
    printf("%u\n", *p);
    printf("%u\n", &p);
    printf("%u\n", q);
    printf("%u\n", *q);
    printf("%d\n", **q);

}