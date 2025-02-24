#include<stdio.h>
void main(){
    int a[4][4];
    printf("Enter : ");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            if(i < j){                 
                a[i][j] = 0;
            }
            else{
                scanf("%d", &a[i][j]);
            }
        }
    }
    printf("LTM is : \n");
    for(int i = 0; i < 4; i++){
        for(int j = 0; j < 4; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}
