#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;

int insert(int key){
    struct node *temp, *ptr;
    temp = malloc(sizeof(struct node));

    if(temp != NULL){
        temp->data = key;
        temp->next = NULL;

        if(start == NULL){
            start = temp;
            return 0;
        }
        ptr = start;
        while(ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = temp;
    }
}
void display(){
    struct node *ptr = start;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
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
    insert(100);
    display();
}