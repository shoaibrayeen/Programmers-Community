#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
    struct node*prev;
    struct node*next;
}*head=NULL;
int main()
{
    struct node*first= (struct node*)malloc(sizeof(struct node));
    struct node*second= (struct node*)malloc(sizeof(struct node));
    struct node*third= (struct node*)malloc(sizeof(struct node));
    
    first->prev=NULL;
    first->data=5;
    first->next=second;
    second->prev=first;
    second->data=69;
    second->next=third;
    third->prev=second;
    third->data=8;
    third->next=NULL;

   head=first;
    while(head->next!=NULL)
    {
        printf("%d ,",head->data);
        head=head->next;
    }
    printf("%d",head->data);
    return 0;
}