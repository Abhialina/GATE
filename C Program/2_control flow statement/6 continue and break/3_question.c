#include<stdio.h>
void main(){
    for(int i = 1; ; i++){
        if(i == 100){
            break;
        }
        else{
            if(i % 2 == 0){
                continue;
            }
            else{
                printf("%d ", i);
            }
        }
    }
}