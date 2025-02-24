#include<stdio.h>
int f(int x){
    if(x % 2 == 0){
        return f(f(x - 1));
    }
    else{
        return x++;
    }
}
void main(){
    printf("%d", f(12));
    getchar();
}
