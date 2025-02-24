#include<stdio.h>
void main(){
    int a[2][3];

    printf("%u ", a);
    printf("%u ", a[0]);
    printf("%u\n", &a);

    printf("%u ", a + 1);           //a + 1 = &a[0] + 1 = address + 1 * 12bytes
    printf("%u ", a[0] + 1);        //a[0] + 1 = &a[0][0] + 1 = address + 1 * 4bytes
    printf("%u\n ", &a + 1);        //a + 1 = &a[0] + 1 = address of whole array + 1 * 24bytes
}