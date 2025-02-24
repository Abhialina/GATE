#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void display(struct node *ptr){
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void main(){
    struct node *one, *two, *three, *four, *start;
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
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
    display(start);
}