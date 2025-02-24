#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
int print_node(struct node *ptr){
    if(ptr == NULL || ptr->next == NULL){
        return 0;
    }
    while(ptr->next->next != NULL){
        ptr = ptr->next;
    }
    printf("%d", ptr->data);
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

    print_node(start);
}