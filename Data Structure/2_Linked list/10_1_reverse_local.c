// #include<stdio.h>
// #include<stdlib.h>
// struct node{
//     int data;
//     struct node *next;
// };

// void display(struct node *ptr){
//     while(ptr != NULL){
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }

// struct node *reverse(struct node **START){
//     struct node *ptr, *prev, *current, *next_n;
//     ptr = *START;
//     if(ptr == NULL || ptr->next == NULL){
//         return 0;
//     }
//     prev = NULL;
//     current = *START;
//     while(current != NULL){
//         next_n = current->next;
//         current->next = prev;
//         prev = current;
//         current = next_n;
//     }
//     *START = prev;
//     return *START;
// }

// void print(struct node *ptr){
//     while(ptr != NULL){
//         printf("%d ", ptr->data);
//         ptr = ptr->next;
//     }
// }
// void main(){
//     struct node *start, *one, *two, *three, *four, *five, *six;
//     one = malloc(sizeof(struct node));
//     two = malloc(sizeof(struct node));
//     three = malloc(sizeof(struct node));
//     four = malloc(sizeof(struct node));
//     five = malloc(sizeof(struct node));
//     six = malloc(sizeof(struct node));

//     one->data = 10;
//     one->next = two;
//     two->data = 20;
//     two->next = three;
//     three->data = 30;
//     three->next = four;
//     four->data = 40;
//     four->next = five;
//     five->data = 50;
//     five->next = six;
//     six->data = 60;
//     six->next = NULL;

//     start = one;
//     printf("Before reverse : ");
//     display(start);
//     printf("\nAfter reverse  : ");
//     reverse(&start);
//     print(start);
// }


#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *next;
};
void display(struct node *ptr){
    while(ptr != NULL){
        printf("%d ", ptr->data);
        ptr = ptr->next;
    }
}

struct node *reverse(struct node **START){
    struct node *prev, *curr, *nextt;
    if(START == NULL){
        return 0;
    }
    prev = NULL, curr = *START;
    while(curr != NULL){
        nextt = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextt;
    }
    *START = prev;
    return *START;
}
// void print_rev(struct node *ptr){
//     // while(ptr != NULL){
//     //     printf("%d ", ptr->data);
//     //     ptr = ptr->next;
//     // }
//     display(ptr);
// }

void main(){
    struct node *start , *one, *two, *three, *four, *five, *six;
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
    printf("Linked List : ");
    display(start);
    printf("\nReverse Linked list : ");
    reverse(&start);
    display(start);
}