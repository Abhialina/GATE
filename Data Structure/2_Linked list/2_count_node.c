#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;
int count() {
    struct node *ptr = start;
    int c = 0;
    while(ptr != NULL) {
        c++;
        ptr = ptr->next;
    }
    return c;
}
void main(){
    struct node *one, *two, *three, *four;
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
    printf("Total nodes in linked list: %d\n", count());
}