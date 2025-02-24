#include<stdio.h>
void main(){
    int count = 0;
    for(int i = 1; i <= 10000000; i++){
        count++;
    }
    printf("%d", count);
}