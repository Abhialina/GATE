#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start;

void display(){
    struct node *temp;
    temp = start;
    while(temp != NULL){
        printf("%d ", temp->data);
        temp = temp->next;
    }
}
void main(){
    struct node *one, *two, *three;
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
    display();
}