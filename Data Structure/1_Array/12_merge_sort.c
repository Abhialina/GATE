#include<stdio.h>
void merge(int a[], int b[], int c[], int m, int n){
    int i = 0, j = 0, k = 0;
    while(i < m && j < n){
        if(a[i] < b[j]){
            c[k++] = a[i++];
        }
        else{
            c[k++] = b[j++];
        }
    }
        while(j < n){
            c[k++] = b[j++];
        }
        while(i < m){
            c[k++] = a[i++];
        }
    }
void main(){
    int a[4] = {10, 20, 30, 40};
    int b[6] = {5, 12, 18, 55, 60, 70};
    int c[10];

    merge(a, b, c, 4, 6);

    printf("Merge sort : ");
    for(int i = 0; i < 10; i++){
        printf("%d ", c[i]);
    }
}