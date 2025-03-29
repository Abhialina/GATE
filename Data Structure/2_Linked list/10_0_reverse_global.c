#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start;

void display(){
    struct node *ptr = start;
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node *reverse(){
    struct node *prev, *current, *next_n;
    if(start == NULL || start->next == NULL){
        return 0;
    }
    current = start, prev = NULL;
    while(current != NULL){
        next_n = current->next;
        current->next = prev;
        prev = current;
        current = next_n;
    }
    start = prev;
    return start;
}

void print_rev(struct node *ptr){
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
    printf("Before reverse : ");
    display();
    reverse();
    printf("\nAfter reverse : ");
    print_rev(start);
}