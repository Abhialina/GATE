#include<stdio.h>
void main(){
        int a, b, c, max;
    printf("Enter no. : ");
    scanf("%d", &a);
    printf("Enter no. : ");
    scanf("%d", &b);
     printf("Enter no. : ");
    scanf("%d", &c);

   /* if(a > b && a > c)
        printf("%d is the largest nuber.", a);
    else{
        if(b > c)
            printf("%d is the largest nuber.", b);
        else
            printf("%d is the largest nuber.", c);
    } */
    max = (a > b && a > c) ? a : (b > c) ? b : c;
    printf("%d is the largest nuber.", max);
}