#include<stdio.h>
void main(){
    int a = 8, count = 0;
    // printf("Enter no. : ");
    // scanf("%d", &a);
    
    for(int i = 1; i <= a; i = i * 3){
        for(int j = 1; j <= a; j++){
            printf("Oey ");
            count++;
        }
        printf("\n");
    }
    printf("%d", count);
}