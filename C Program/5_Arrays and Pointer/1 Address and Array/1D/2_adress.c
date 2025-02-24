#include<stdio.h>
void main(){
    int a[4] = {1, 2, 3, 4};

    printf("%u ", a);           //a &a[0] = address of first element
    printf("%u ", &a[0]);
    printf("%u ", &a); 
    printf("%d\n", 0[a]);        //&a ---> 16bytes (adress of whole array)

    printf("%u ", a + 1); 
    printf("%u ", &a[0] + 1);
    printf("%u ", &a + 1);
    printf("%d\n", 1[a]);

    printf("%u ", a + 2);
    printf("%u ", &a[0] + 2);
    printf("%u ", &a + 2);
    printf("%d\n", 2[a]);

}