#include<stdio.h>
void main(){
    int a[4] = {1, 2, 3, 4};

    printf("%d ", *a);              //*a = *&a[0] = a[0] = 1
    printf("%d ", *(a + 1));         //*a = *&a[0] = a[0] = 2
    printf("%d\n", *(a + 2));

    printf("%d ", a[2]);
    printf("%d ", *(a + 2));
    printf("%d ", a[2]);
    printf("%d\n", 2[a]);
}