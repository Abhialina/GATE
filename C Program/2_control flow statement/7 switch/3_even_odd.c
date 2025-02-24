#include<stdio.h>
void main(){
    int a;
    printf("Enter No. : ");
    scanf("%d", &a);

    switch(a){
        case 2 :
        case 4 :
        case 6 :
        case 8 :
        case 10 : printf("%d is an Even number", a);
            break;

        case 1 : 
        case 3 :
        case 5 :
        case 7 :
        case 9 : printf("%d is an Odd number", a);
            break;
        default : printf("Error!");
            break;
    }
}