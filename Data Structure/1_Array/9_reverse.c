#include<stdio.h>
void reverse(int a[], int i, int j){
    //int temp;
    while(i < j){
        // temp = a[i];
        // a[i] = a[j];
        // a[j] = temp;

        a[i] = a[i] + a[j] - (a[j] = a[i]);
        
        i++;
        j--;
    }
}
void main(){
    int n;
    printf("Enter array size : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    reverse(a, 0, n-1);
    printf("Reverse of Array is : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
}