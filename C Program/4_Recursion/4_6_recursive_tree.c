#include<stdio.h>
int f(int n){
    if(n == 1){
        return 1;
    }
    else{
        return f(n/2) + f(n/2) + 1;
    }
}
void main(){
    int i;
    i = f(22);
    printf("%d", i);
}
