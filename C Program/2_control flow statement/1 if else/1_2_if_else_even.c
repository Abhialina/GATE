#include<stdio.h>
void main(){
    do{
        int a;
    printf("Enter no. : ");
    scanf("%d", &a);
    
    if(a > 0 && a % 2 == 0){
        printf("%d is an Even Number\n", a);
    }
    else if(a > 0 && a != 0){
        printf("%d is an Odd number\n", a);
    }
    else if(a == 0){
        printf("%d is Neutral Number.\n", a);
    }
    else{
        printf("%d is a negative number\n", a);
    }
    if(a < 0){
        break;
    }
    }
    while(1);
}