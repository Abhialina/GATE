#include<stdio.h>
void main(){
    int a[4] = {1,2,3,4}, b = 10;
    printf("%u  ", a);
    printf("%p\n", a);
    printf("%d  ", &a[0]);
    printf("%p\n", &a[0]);

    printf("%d  ", &b);
    printf("%d\n", *&b);        //* and & cancel each other in *&b, and give value of b
    //printf("%d  ", &a[0]);
    //printf("%p", &a[0]);
}