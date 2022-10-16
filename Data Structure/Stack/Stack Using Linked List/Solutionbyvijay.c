#include<stdio.h>
#include<stdlib.h>
#include<limits.h>
typedef struct node
{
    int data;
    struct node* link;
}node;

typedef struct stack
{
    struct node*  top;
    int size;
}st;

int isEmpty(st * p)
{
    if(p->top == NULL)
    {
        return 1;
    }
    else
    {
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

node *InsertionAtBeg(node *h, int data)
{
    node *new = (node *)malloc(sizeof(node));
    new->data = data;
    new->link = h;
    h = new;

    return h;
}

int pop(st* p )
{
    int dval = INT_MIN;
    if(isEmpty(p))
    {
        return dval;
    }
    else
    {
        p->top=DeleteAtBeg(p->top , &dval);
        p->size -- ;
        return dval;
    }
}

void push (st* p , int data)
{
    p->top = InsertionAtBeg(p->top,data);
    p->size++;

    
}
void print(node *h)
{
    while (h != NULL)
    {
        printf("%d ", h->data);
        h = h->link;
    }
}

void display(st * p)
{
    if(isEmpty(p))
    {
        printf("Stack is Empty");
    }
    else
    {
        print(p->top);
    }
}

int main()
{
    st s1;
    int data , val;
    int status;
    s1.top = NULL;
    s1.size = 0;
    int choice;

    do
    {
        printf("1. Push the Element \n");
        printf("2.Pop the element\n");
        printf("3. Display the element\n");
        printf("Enter your choice: \n");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("Enter the data \n");
                scanf("%d",&data);
                push(&s1 , data );
                break;
            
            case 2:
                val = pop(&s1);
                if(val == INT_MIN)
                {
                    printf("Stack is Empty");
                }
                else
                {
                    printf("Deleted value is %d ", val);
                }
                break;

            case 3:
                display(&s1);
                break;

        }

        printf("\n");
    } while (choice!=0);
    

    return 0;
}