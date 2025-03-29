#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;

int mid_node(){
    struct node *ptr = start;
    int c = 0;
    while(ptr != NULL){
        c++;
        ptr = ptr->next;
    }
    c /= 2;
    ptr = start;
    for(int i = 1; i <= c; i++){
        ptr = ptr->next;
    }
    printf("\nMid node : %d ", ptr->data);
}
void display(){
    struct node *ptr = start;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
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
    three->next = four;
    four->data = 40;
    four->next = five;
    five->data = 50;
    five->next = six;
    six->data = 60;
    six->next = NULL;

    start = one;
    display();
    mid_node();
}