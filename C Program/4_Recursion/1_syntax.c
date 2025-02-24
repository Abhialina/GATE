#include<stdio.h>
int print(int n){
        if(n == 1){
        printf("Hey");
        return 0;
    }
    else{
        printf("Hey ");
        print(n - 1);
    }
    }
void main(){
    int n;
    printf("Enter number : ");
    scanf("%d", &n);

    print(n);
}