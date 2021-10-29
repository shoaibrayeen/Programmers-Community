#include <stdio.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node*prev;
    struct node*next;
}*head=NULL,*temp=NULL;
int create(int a)
{
    if(a==0)
    {
        return 0;
    }
    else
    {
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter Data:");
        scanf("%d",&ptr->data);
        ptr->prev=NULL;
        ptr->next=NULL;

        if(head==NULL)
        {
            head=temp=ptr;
        }
        else
        {
            temp->next=ptr;
            ptr->prev=temp;
            temp=ptr;
        }
        temp->next=NULL;  
    }
    create(a-1);
}
void printing()
{
    while(head->next!=NULL)
    {
        printf("%d",head->data);
        head=head->next;
    }
}
int main()
{
    int n;
    printf("Enter number no item in list:");
    scanf("%d ,",&n);
    create(n);
    printing();
}