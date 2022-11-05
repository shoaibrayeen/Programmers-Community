#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

struct stack
{
    int top;
    int size;
    int *starray;
};
int isEmpty(struct stack *p)
{
    if (p->top == -1)
    {
        printf("Stack is Empty");
        return INT_MAX;
    }

    return INT_MIN;
}

int push(struct stack *p, int data)
{

    if (p->top == p->size - 1)
    {
        printf("Overflow of stack");
        return INT_MIN;
    }
    else
    {
        p->top++;
        p->starray[p->top] = data;
        return INT_MAX;
    }
}

int pop(struct stack *p, int *dval)
{
    if (isEmpty(p) == INT_MAX)
    {
        *dval = INT_MIN;
        return INT_MIN;
    }
    else
    {
        *dval = p->starray[p->top];
        p->top--;
        return INT_MAX;
    }
}

void display(struct stack *p)
{
    if (p->top == -1)
    {
        printf("Stack is Empty");
    }
    for (int i = p->top; i >= 0; i--)
    {
        printf("%d ", p->starray[i]);
    }
}

int main()
{
    int choice;
    int x;
    int dval = INT_MIN;
    struct stack s1;
    int data;
    s1.top = -1;
    s1.size = 10;
    s1.starray = (int *)malloc(s1.size * sizeof(int));
    do
    {
        printf("\n1. push the element\n");
        printf("2.display\n");
        printf("3.pop the element\n ");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the data");
            scanf("%d", &data);
            x = push(&s1, data);

            break;
        case 2:
            display(&s1);

            break;
        case 3:
            x = pop(&s1, &dval);
            if (dval != INT_MIN)
            {
                printf("Deleted Value = %d \n", dval);
            }
            break;
        case 0:
            break;
        default:
            printf("Enter valid Keyword");
        }
    } while (choice != 0);

    return 0;
}