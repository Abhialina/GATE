#include<stdio.h>
void main(){
    int a = 5, b, c;
    b = ++a;    // ++a ---> first increase then  use updated(incremented) value 
    printf("%d\n", a);
    printf("%d\n", b);
    
    c = a++;
    printf("%d\n", c);  // a++ ---> use the value
    printf("%d", a);    // then increment the value
}