#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int search(int key, struct node *ptr){
    while(ptr != NULL){
        if(ptr->data == key){
            printf("\nFound");
            return 0;
        }
        ptr = ptr->next;
    }
    printf("Not found!");
}

void main(){
    struct node *start, *one, *two, *three, *four;
    one = malloc(sizeof(struct node));
    two  = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));

    one->data = 10;
    one->next = two;
    two->data = 20;
    two->next = three;
    three->data = 30;
    three->next = four;
    four->data = 40;
    four->next = NULL;
    start = one;

    search(70, start);
    search(30, start);
}