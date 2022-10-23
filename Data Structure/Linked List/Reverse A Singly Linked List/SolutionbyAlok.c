#include<stdio.h>
#include<stdlib.h>
typedef struct node
{
    int data;
    struct node *link;

} node;

node *creation(node *head, int n)
{
    node *ptr = head;
    int data;
    printf("Enter the data");
    scanf("%d", &data);
    head->data = data;
    head->link = NULL;
    for (int i = 0; i < n - 1; i++)
    {
        node *curr;
        curr = (node *)malloc(sizeof(node));
        printf("Enter the data");
        scanf("%d", &data);
        curr->data = data;
        curr->link = NULL;
        ptr->link = curr;
        ptr = curr;
    }
    return head;
}
void print(node *h)
{
    while (h != NULL)
    {
        printf("%d ", h->data);
        h = h->link;
    }
}

node* reverse(node* h )
{
    node* prev = NULL;
    node* next = NULL;

    while(h!=NULL)
    {
        next = h->link;
        h->link = prev;
        prev = h;
        h = next;
    }

    h = prev;

    return h;

}
int main()
{
    int n, data, pos;

    printf("Enter the no. list:\n");
    scanf("%d", &n);
    if (n == 0)
    {
        printf("Empty list");
    }
    else
    {
        node *head = (node *)malloc(sizeof(node));
        head = creation(head, n);
        print(head);
        printf("\n");
     
        head = reverse(head);
        print(head);
    }


    return 0;
}