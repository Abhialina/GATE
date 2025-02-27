#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;

int insert_at_begin(int key){
    struct node *ptr;
    ptr = malloc(sizeof(struct node));
    
    if(ptr != NULL){
        ptr->data = key;
    ptr->next = start;
    start = ptr;
    }

    return 0;
}
int display(){
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
    insert_at_begin(120);
    display();

}