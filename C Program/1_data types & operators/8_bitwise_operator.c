#include<stdio.h>
void main(){
    int a = 7, b = 12, c, d, e;   
    //0 & 1 ---> 0  //1 & 0 ---> 0
    //1 & 1 ---> 1  //0 & 0 ---> 0
    c = a & b;  
    printf("%d\n",c);

    //0 | 0 ---> 0  //1 | 1 ---> 1
    //0 | 1 ---> 1  //1 | 0 ---> 1
    d = a | b;
    printf("%d\n",d);

    
    e = a ^ b;
    printf("%d\n", e);

    c = ~a;     //bitwise NOT operator : c = ~a ---> c = -(a + 1)
    printf("%d\n", c);    

    d = ~b;     //bitwise NOT operator : d = ~b ---> d = -(b + 1)
    printf("%d", d);
}