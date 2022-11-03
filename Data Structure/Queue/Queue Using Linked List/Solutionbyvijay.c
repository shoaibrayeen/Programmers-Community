#include<stdio.h>
#include<stdlib.h>
#include<limits.h>

typedef struct node 
{
    int data;
    struct node* link;
}node;

typedef struct queue 
{
    node* front;
    node* rear;
    int size;
}qu;

int isEmpty(qu * p)
{
    if(p->front == NULL && p->rear == NULL)
    {
        return 1;

    }
    else{
        return 0;
    }

}
node* DeleteAtBeg(node*h , int *dval)
{
    node* temp;
    if(h==NULL)
    {
        *dval = INT_MIN;
        return h;
    }
    else
    {
        temp = h;
        *dval = temp->data;
        h=h->link;
        free(temp);
    }
    return h;
}
void print(node *h)
{
    while (h != NULL)
    {
        printf("%d ", h->data);
        h = h->link;
    }
}

void enqueue(qu * p , int data)
{
    node * new = (node*)malloc(sizeof(node));
    new->data = data;
    new->link = NULL;
    if(p->front == NULL)
    {
        p->front = p->rear = new;
        p->size++;
    }
    else
    {
        p->rear->link = new;
        p->rear = new;
        p->size++;
    }

}

int dequeue(qu* p)
{
     
    int dval = INT_MIN;
    if(isEmpty(p))
    {
        return dval;
    }
    else
    {
        if(p->front == p->rear)
        {
            dval =p->front->data;
               
            p->front= p->rear = NULL;
            free(p->front);
            p->size = 0;
        }
        else
        {
            p->front = DeleteAtBeg(p->front , &dval);
            p->size--;

            
        }
        return dval;
    }
}
void display(qu *p)
{ 
    int i=0;
    if (isEmpty(p))
    {
        printf("Queue is Empty\n");
    }
    else
    {
        print(p->front);
           
    }
}
int main()
{
    int choice , data , dval;
    qu cq;
    cq.front = cq.rear = NULL;
    cq.size = 0;

    do
    {
        printf("\n1.Enqueue\n");
        printf("2.Display\n");
        printf("3.Dequeue \n");
        printf("0.Exit\n");
        printf("Enter the choice\n");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the data\n");
            scanf("%d",&data);
            enqueue(&cq , data);
            break;
        case 2:
            display(&cq);
            break;
        case 3:
            dval = dequeue(&cq);
            if(dval == INT_MIN)
            {
                printf("Queue is Empty\n");
            }
            else
            {
                printf("Deleted Value is %d \n",dval);
            }
            break;
        default:
            break;
        }
    } while (choice!=0);
    
    return 0;

}