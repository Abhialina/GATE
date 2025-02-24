#include<stdio.h>
void main(){
    int a;
    printf("Enter No. : ");
    scanf("%d", &a);

    switch(a){
        case 1 ... 10 : {
            for(int i = 1; i <= 10; i++){
                printf("%d ", i);
            }
        }
            break;
        case 11 ... 20 : {
            for(int i = 11; i <= 20; i++){
                printf("%d ", i);
            }
        }
            break;
        default : printf("%d is not in Range", a);
            break;
    }
}