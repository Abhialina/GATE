#include<stdio.h>
void main(){
    int a = 0;
    ++a;
    printf("%d ", a);

    {
        int b = 10;
        ++b;
        ++a;
        printf("%d ", a);
        printf("%d ", b);
    }
    ++a;
    //++b;              this line gave compilation error
    printf("%d ", a);
    //printf("%d ", b);
}