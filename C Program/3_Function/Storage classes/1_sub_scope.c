#include<stdio.h>
void main(){
    int a = 0;
    ++a;
    printf("%d ", a);
    {                       //sub scope 
        int a = 10;
        ++a;
        printf("%d ", a);
    }
    ++a;
    printf("%d", a);
}