#include<stdio.h>
void main(){
    int a[100], n;
    printf("Enter Array size : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
   for(int i = 0; i < n / 2; i++){
        a[i] = a[i] ^ a[n-1-i];
        a[n-1-i] = a[i] ^ a[n-1-i];
        a[i] = a[i] ^ a[n-1-i]; 
   }
   printf("After reversing : ");
   for(int i = 0; i < n; i++){
    printf("%d ", a[i]);
   }
}