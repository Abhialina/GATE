// #include<stdio.h>
// void main(){
//     int a[7] = {1, 5, 2, 7, 11, 67, 23};

//     int key = 7;
//     for(int i = 0; i < 7; i++){
//         if(a[i] == key){
//             printf("%d is found\n", key);
//         }
//     }
// }
#include<stdio.h>
int search(int a[], int n, int key){
    for(int i = 0; i < n; i++){
        if(a[i] == key)
            return 1;
    }
    return 0;
}
void main(){
    int n = 9, key = 98;
    int a[] = {10, 3, 50, 2, 98, -11, 30, 5, 100};
    
    int b = search(a, n, key);
    printf("%d\n", b);
}