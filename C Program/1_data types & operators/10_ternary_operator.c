#include<stdio.h>
void main(){
    int a,b;
    a = 10 != 3 > 6 ? 2 == 6 != 3 ? 10 : 20 : 30;
    printf("%d\n", a);

    b = 15 < 2 ? 3 != 4 > 10 ? 10 : 20 : 4 < 7 != 7 > 10 ? !5 ? 30 : !2 != 2 ? 4 : 5 : 6;
    printf("%d", b);
    }