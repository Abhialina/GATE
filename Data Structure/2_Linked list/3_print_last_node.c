#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;
int last_node(){
    struct node *ptr = start;
    if(start == NULL){
        return 0;
    }
    while(ptr->next != NULL){
        ptr = ptr->next;
    }
    printf("%d", ptr->data);

    // while(ptr != NULL){
    //     if(ptr->next == NULL){
    //         printf("%d", ptr->data);
    //     }
    //     ptr = ptr->next;
    // }
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
    last_node();
}