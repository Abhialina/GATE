#include<stdio.h>
void main(){
    char ch;
    int count = 0;
    for(ch = 1; ch; ch = ch + 1){
        printf("Hey Quackk\n");   //print hey quackk 255times
        count++;
    }
    
    printf("%d", count);
}