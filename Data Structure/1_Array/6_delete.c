#include<stdio.h>
int main(){
    int n, a[100], index, key;
    printf("Enter Array size : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter location to be delete : ");
    scanf("%d", &index);

    if(index < 1 || index > n){
        printf("Enter valid loaction!");
        return 1;
    }
    printf("Before deletion : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    for(int i = index-1; i < n -1; i++){
        a[i] = a[i + 1];
    }
    n--;
    printf("\nAfter deletion : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}