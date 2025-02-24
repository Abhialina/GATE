#include<stdio.h>
void main(){
    int a, b, c, max;
    printf("Enter no. : ");
    scanf("%d", &a);
    printf("Enter no. : ");
    scanf("%d", &b);
     printf("Enter no. : ");
    scanf("%d", &c);

    if(a > b && a > c)
        printf("%d is the largest number.", a);
    else{
        if(b > c)
            printf("%d is the largest number.", b);
        else
            printf("%d is the largest number.", c);
    }

   /* if(a > b && a > c){
        printf("%d", a);
    }
      else if()
      */
}