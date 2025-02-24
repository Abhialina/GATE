#include<stdio.h>
int search(int a[], int n, int key){
    int s = 0, e = n-1, mid;
    while(s <= e){
        mid = (s + e) / 2;
        if(a[mid] == key){
            printf("\n%d is found at location %d in Array", key, mid + 1);
            return 1;
        }
        else if(a[mid] < key){
            s = mid + 1;
        }
        else{
            e = mid - 1;
        }
    }
    printf("\n%d is not found in Array", key);

}
void main(){
    int a[100], n, key;
    printf("Enter size : ");
    scanf("%d", &n);
    printf("Enter elements : ");
    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }
    printf("Enter number to be search : ");
    scanf("%d", &key);
    printf("Array is : ");
    for(int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }

    search(a, n, key);
}