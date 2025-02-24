#include<stdio.h>
void main(){
    int n;
    printf("Enter Size : ");
    scanf("%d", &n);
    int a[n][n];
    printf("Enter : ");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(i == 0 || (i + j) == (n - 1) || i == n-1){
                scanf("%d", &a[i][j]);
            }
            else{
                a[i][j] = 0;
            }
        }
    }
    printf("Z-matrix is : \n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            printf("%4d", a[i][j]);
        }
        printf("\n");
    }
}