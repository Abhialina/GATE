#include<stdio.h>
void main(){
    int x = 10;
    char *p;
    p =(char *) &x;

    printf("%d", *p);
}