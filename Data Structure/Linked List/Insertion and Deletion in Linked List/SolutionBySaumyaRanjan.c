#include<stdio.h>
#include<stdlib.h>

int size;


struct node
{
    int data;
    struct node *link;
};

void add_node_at_end(struct node **head,int val)
{
    struct node *newNode = (struct node*)malloc(sizeof(struct node));
    newNode->data=val;
    newNode->link=NULL;
    if (*head==NULL)
    {
        (*head)=newNode;
        size++;
    }                                                                            //O(n)

    else
    {
        struct node *temp=*head;
        while(temp->link!=NULL)
            temp=temp->link;
        temp->link=newNode;
        size++;
    }
}

void add_node_at_beginnig(struct  node **head, int val)
{
    struct node *newNode=(struct node*)malloc(sizeof(struct node));
    newNode->data=val;                                                           //O(1)
    newNode->link=*head;
    *head=newNode;
    size++;
}

void delete_beginning_node(struct node **head)
{
  if(*head==NULL)
  {                                                                             //O(1)
    printf("\nList is Empty!!\n");
    return;
  }
    struct node *temp=*head;
    *head=(*head)->link;
    free(temp);
    temp=NULL;
    size--;
}

void delete_end_node(struct node *head)
{
  if(head==NULL)
  {
    printf("\nList is Empty!!\n");
    return;                                                                      //O(n)
  }
    struct node *temp=head;
    struct node *temp1;
    while(temp->link!=NULL)
    {
        temp1=temp;
        temp=temp->link;
    }
    temp1->link=NULL;
    free(temp);
    size--;

}

void display(struct node *head)
{
    struct node *temp=head;
    if(head==NULL)
    {
        printf("\nList is Empty!!\n");
        return;
    }
    while(temp!=NULL)                                                           //O(n+1)
    {
        printf("%d -> ",temp->data);
        temp=temp->link;
    }
    printf("NULL\n");
}



int main()
{
    int val,n;
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head=NULL;
    printf("\nEnter number of node: ");
    scanf("%d",&n);

    //Create Node
    printf("\n\t Create the list\n");
    for(int i=0;i<n;i++)
    {
        printf("\nEnter Data %d: ",i+1);
        scanf("%d",&val);
        add_node_at_end(&head,val);
    }

    //Display Node
    display(head);

    int choice;
    do{
        // Option list
        printf("\n1. Insert Node At Beginning\n");
        printf("2. Insert Noded At End\n");
        printf("3. Delete Node At Beginning\n");
        printf("4. Delete Node At End\n");
        printf("5. Exit\n");
         printf("Choose an option:");
        scanf("%d\n",&choice);
        switch(choice){
            case 1:
                //Insert node at beginning
                printf("\n\tInsert node at beginning\n");
                printf("\nEnter data to add at beginning: ");
                scanf("%d",&val);
                add_node_at_beginnig(&head,val);
                display(head);
            break;

            case 2:
                //Insert node at end
                printf("\n\tInsert node at end\n");
                printf("\nEnter data to add at end: ");
                scanf("%d",&val);
                add_node_at_end(&head,val);
                display(head);
            break;

            case 3:
                //Delete at beginning
                printf("\n\tDelete at beginning\n");
                delete_beginning_node(&head);
                display(head);
            break;

            case 4:
                //Delete at end
                printf("\n\tDelete at End\n");
                delete_end_node(head);
                display(head);
            break;
            case 5: break;
            default:
                printf("\n\tInvalid Input\t\n");
        } 
    } while(choice!=5);
    return 0;
}
