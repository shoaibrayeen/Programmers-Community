#include<stdio.h>
#include<stdlib.h>

int size;

struct node
{
    int data;
    struct node *link;
};

void at_end(struct node **head,int val)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->link=NULL;
    if (*head==NULL)
    {
        (*head)=newNode;
        size++;
    }

    else
    {
        struct node *temp=*head;
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=newNode;
        size++;
    }
}

//Function to display
void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("\nList is Empty!!\n");
        return;
    }
    while(temp!=NULL)
    {
        printf("%d -> ",temp->data);
        temp=temp->link;
    }
    printf("NULL\n");
}

//Function to find commom elements
void common(struct node *head1 ,struct node *head2)
{
    struct node *temp1=head1;
    struct node *temp2=head2;
    for(int i=0;temp1!=NULL;i++)
    {
      for(int j=0;temp2!=NULL;j++)
      {
          if (temp1->data==temp2->data)
          {
            printf("%d ",temp1->data );
          }
            temp2=temp2->link;
      }
      temp1=temp1->link;
      temp2=head2;
    }

}

//To Reverse a linked list 
void reverse(struct node *head)
{
    struct node *temp=head;
    struct node *prev,*next;
    prev=next=NULL;
    while(temp!=NULL)
    {
        next=temp->link;
        temp->link=prev;
        prev=temp;
        temp=next;
    }
    head=prev;
    display(head);
}

//Function to  union both linked list
void merge(struct node *head1, struct node *head2)
{
  struct node *temp3=(struct node*)malloc(sizeof(struct node));
  temp3=NULL;
  struct node *temp;
  while(head1!=NULL && head2!=NULL)
  {
    if(head1->data<head2->data)
    {
      temp=head1->link;
      head1->link=temp3;
      temp3=head1;
      head1=temp;
    }
    else if(head2->data<head1->data)
    {
      temp=head2->link;
      head2->link=temp3;
      temp3=head2;
      head2=temp;
    }
    else if(head1->data==head2->data)
    {
      struct node *ptr;
      temp=head1->link;
      ptr=head2->link;
      head1->link=temp3;
      temp3=head1;
      head1=temp;
      head2=ptr;
    }
  }

  while(head1!=NULL)
  {
    temp=head1->link;
    head1->link=temp3;
    temp3=head1;
    head1=temp;
  }
  while(head2!=NULL)
  {
    temp=head2->link;
    head2->link=temp3;
    temp3=head2;
    head2=temp;
  }
  reverse(temp3);
}

int main()
{
    int val,n1,n2;
    struct node *head1=(struct node*)malloc(sizeof(struct node));
    struct node *head2=(struct node*)malloc(sizeof(struct node));
    head1=head2=NULL;
    printf("\nEnter number of nodes in list 1: ");
    scanf("%d",&n1);

    //Create Node
    printf("\n\t Create the list\n");

    //list 1
    printf("\n\tList 1\n");
    for(int i=0;i<n1;i++)
    {
        printf("\nEnter Data %d: ",i+1);
        scanf("%d",&val);
        at_end(&head1,val);
    }
    
    //list 2
    printf("\n\tList 2\n");
    printf("\nEnter number of nodes in list 2: ");
    scanf("%d",&n2);
    for(int i=0;i<n2;i++)
    {
        printf("\nEnter Data %d: ",i+1);
        scanf("%d",&val);
        at_end(&head2,val);
    }

    //common
    printf("\n\tCommon\n");
    common(head1,head2);

    //Display Node
    printf("\nList 1: ");
    display(head1);
    printf("\nList 2: ");
    display(head2);

    //Union of list
    printf("\n\tMerge list\n");
    merge(head1,head2);

    return 0;
}

/* Input: 
    First List: 1->2->3->4->NULL
    Second List: 2->4->5->NULL
    Union Result: 1->2->3->4->5->NULL
   */
