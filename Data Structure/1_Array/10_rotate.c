#include<stdio.h>
void reverse(int a[], int i, int j){
    int temp;
    while(i < j){
        temp = a[i];
        a[i] = a[j];
        a[j] = temp;

        i++;
        j--;
    }
}
void main(){
    int a[] = {10, 20, 30, 40, 50, 60};
    reverse(a, 0, 1);
    reverse(a, 2, 5);
    reverse(a, 0, 5);           //rotating by 2 times...

    for(int i = 0; i < 6; i++){
        printf("%d ", a[i]);
    }
}