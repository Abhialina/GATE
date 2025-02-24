#include<stdio.h>
void main(){
    int a;
    printf("Enter no. : ");
    scanf("%d", &a);

    int i = 0;
    int new = 0;
    while(i <= a){
        new += i;
        i++;
    }
    printf("Sum of first %d natural no. is : %d", a, new);
}