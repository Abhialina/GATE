#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
struct node *start = NULL;

void alternate_1(){
    struct node *ptr = start;
    int count = 1;
    while(ptr != NULL){
        if(count % 2 == 1){
            printf("%d ", ptr->data);
        }
        ptr = ptr->next;
        count++;
    }
    printf("\n");
}
void alternate_2(){
    struct node *ptr = start;
    int count = 1;
    while(ptr != NULL){
        if(count % 2 == 0){
            printf("%d ", ptr->data);
        }
        ptr = ptr->next;
        count++;
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

    alternate_1();
    alternate_2();
}