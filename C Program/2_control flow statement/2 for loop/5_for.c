#include<stdio.h>
void main(){
    int i = 1;
    for(printf("1"); i <= 5; printf("2")){
        printf("3");            //\x1b[32m\x1b[0m ~~~-> green color
        i += 1;
    }
}