#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int alternate(struct node *ptr){
    while(ptr != NULL && ptr->next != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next->next;
    }
    if(ptr == NULL){
        return 0;
    }
    if(ptr->next == NULL){
        printf("%d", ptr->data);
    }
}
void main(){
    struct node *start, *one, *two, *three, *four, *five, *six;
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
    six->data = 69;
    six->next = NULL;
    start = one;

    alternate(start);
}