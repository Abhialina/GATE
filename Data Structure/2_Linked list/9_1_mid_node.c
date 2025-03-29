#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct  node *next;
};
struct node *start = NULL;

void display(){
    struct node *ptr = start;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

int mid_node(){
    struct node *slow = start, *fast = start;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast = fast->next->next;
    }
    printf("\nMid node : %d", slow->data);
}
void main(){
    struct node *one, *two, *three, *four, *five, *six;
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));
    four = malloc(sizeof(struct node));
    five = malloc(sizeof(struct node));
    six = malloc(sizeof(struct node));

    one->data = 10;
    one->next = two;
    two->data = 20;
    two->next = three;
    three->data = 30;
    three->next =four;
    four->data = 40;
    four->next = five;
    five->data = 50;
    five->next = NULL;
    six->data = 60;
    six->next = NULL;

    start = one;
    display();
    mid_node();
}