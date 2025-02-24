#include<stdio.h>
void main(){
    int a;
    printf("Enter Case No. : ");
    scanf("%d", &a);

    switch(a){
        case 1 : printf("you enter %d", a);
            break;
        case 2 : printf("You enter %d", a);
            break;
        case 3 : printf("You enter %d", a);
            break;
        default : printf("Error!");
            break;
            
    }
}