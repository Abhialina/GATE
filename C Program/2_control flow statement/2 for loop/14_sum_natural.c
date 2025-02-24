#include<stdio.h>
void main(){
    int n;
    printf("Enetr no. : ");
    scanf("%d", &n);

    int new = 0;
    for(int i = 1; i <= n; i++){
        new += i;
    }
    printf("%d", new);
}