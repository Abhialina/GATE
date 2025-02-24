#include<stdio.h>
void main(){
    int a[5][5];
    printf("Enter : ");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            if(i == j || (i - j) == -1 || (i - j) == 1){
                scanf("%d", &a[i][j]);
            }
            else{
                a[i][j] = 0;
            }
        }
    }
    printf("Tri-diagonal matrix is : \n");
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}