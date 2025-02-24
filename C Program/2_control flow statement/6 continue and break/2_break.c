#include<stdio.h>
void main(){
    for(int i = 1; i <= 20; i++){
        if(i % 5 == 0){
            break;
        }
        else{
            printf("%d ", i);
        }
    }

}