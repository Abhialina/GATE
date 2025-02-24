#include<stdio.h>
void swap(int a, int b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}
void main(){
    int x = 10;
    int y = 20;
    printf("X = %d, Y = %d\n", x, y);
    swap(x, y);
    printf("X = %d, Y = %d\n", x, y);
    printf("Swaping not possible in call by value\n");
    printf("Call by Value : Agar koi other function me kuchh bhi krenge,\n main() fn me koi changes nhi hoga");
}