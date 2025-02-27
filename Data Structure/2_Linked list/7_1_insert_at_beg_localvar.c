#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void insert(struct node **START, int key){
    struct node *temp;
    temp = malloc(sizeof(struct node));
    if(temp != NULL){
        temp->data = key;
        temp->next = *START;
        *START = temp;
    }
}

void display(struct node *ptr){
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void main(){
    struct node *start, *one, *two, *three;
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    one->data = 10;
    one->next = two;
    two->data = 20;
    two->next = three;
    three->data = 30;
    three->next = NULL;

    start = one;
    insert(&start, 100);             //yanha start ka address denge function ko taki direct value update ho ske
    display(start);
}