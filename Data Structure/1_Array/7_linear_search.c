#include<stdio.h>
int search(int a[], int n, int key){
    for(int i = 0; i < n; i++){
        if(a[i] == key){
            printf("\n%d is found in Array at location %d", key, i + 1);
            return 1;
        }
    }
    printf("\n%d is not found in array", key);
}
int main(){
    int a[100], key, n;
    printf("Enter array size : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter number to be search : ");
    scanf("%d", &key);
    printf("Array : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    search(a, n, key);

    return 0;
}