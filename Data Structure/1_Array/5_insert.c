#include<stdio.h>
int main(){
    int n, a[100], key, index;
    printf("Enter array size : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter number to be insert and location : ");
    scanf("%d%d", &key, &index);

    if(index < 1 || index > n+1){
        printf("Enter valid loaction!");
        return 1;
    }
    printf("Before insertion : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    for(int i = n; i >= index; i--){
        a[i] = a[i-1];
    }
    a[index - 1] = key;
    n++;
    printf("\nAfter insertion : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}