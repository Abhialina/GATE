#include<stdio.h>
void main(){
    int count = 0;
    for(int i = 1; i <= 100; i = i * 3){
        printf("Hey Cutie\n");
        count++;
    }
    printf("%d", count);
}