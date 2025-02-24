#include<stdio.h>
void main(){
    char c = 65;
    char *p;
    p = &c;
    printf("%c\n", *p);
    printf("%u", p);
} 