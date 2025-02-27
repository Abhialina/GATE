#include<stdio.h>
#include<Stdlib.h>
struct node{
    int data;
    struct node *next;
};

int delete(struct node **START){
    struct node *ptr;
    if(*START == NULL){
        return 0;
    }
    ptr = *START;
    if(ptr->next == NULL){
        *START = NULL;
        free(ptr);
        return 0;
    }
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    free(ptr->next);
    ptr->next = NULL;
}
void display(struct node *ptr){
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}
void main(){
    struct node *start, *one, *two, *three, *four;
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
    delete(&start);
    display(start);
}