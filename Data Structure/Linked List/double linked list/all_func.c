#include <stdio.h>
#include <stdlib.h>

//----------------------------------------STRUCTURE------------------------------------------------

struct node
{
    int data;
    struct node *next;
    struct node *prev;
}*head=NULL,*temp;

//---------------------------------------------CALLING FUNCTION-----------------------------------------------------------------------

void create();
void display();

//-----------------------------------------CREATE FUNCTION-----------------------------------------------------------------------------------

void create()
{
    int n;
    printf("Enter number of nodes to be created:");
    scanf("%d",&n);
    while(n!=0)
    {
        struct node*ptr=(struct node*)malloc(sizeof(struct node));
        printf("Enter data:");
        scanf("%d",&ptr->data);
        ptr->next= NULL;
        ptr->prev=NULL;
        if(head==NULL)
        {
            head=temp=ptr;
        }
        else
        {
            ptr->prev=temp;
            temp->next=ptr;
            temp=ptr;
        }
        n--;
    }
}

//-------------------------------------------PRINTING----------------------------------------------------------------------------------------

void display()
{
    temp=head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp=temp->next;
    }
}

//-------------------------------------------MAIN FUNCTION-------------------------------------------------------------------------------

void main()
{
    create();
    display();
}