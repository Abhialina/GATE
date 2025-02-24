#include<stdio.h>
void main(){
    for(int i = 1; i <= 10; i++){
        if(i % 2 == 0){         //skip the remaining portion of if condition---->only print 13579 
            continue;
        }
        printf("%d", i);
    }
}