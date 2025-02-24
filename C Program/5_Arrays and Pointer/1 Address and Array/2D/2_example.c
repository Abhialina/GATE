#include<stdio.h>
void main(){
    int a[3][4] = {1, 2, 3, 4, 5, 6, 7, 8};

    printf("%u ", a);
    printf("%u ", a[0]);
    printf("%u\n", &a);

    printf("%u ", a + 1);
    printf("%u ", a[0] + 1);
    printf("%u\n", &a + 1);

    printf("%u ", *a);
    printf("%u ", *a[0]);
    printf("%u\n ", **a);      
}