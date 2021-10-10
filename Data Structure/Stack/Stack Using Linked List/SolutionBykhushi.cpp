#include <stdio.h>
#include <stdlib.h>
void push();
void pop();
void display();
struct node {
    int val;
    struct node* next;
};
struct node* head;

int main()
{
    int choice = 0;
    printf("\n\nChose one from the below options...\n");
    printf("\n1.Push\n2.Pop\n3.Exit");
    while (choice != 3) {

        printf("\n Enter your choice \n");
        scanf("%d", &choice);
        switch (choice) {
        case 1: {
            push();
            break;
        }
        case 2: {
            pop();
            break;
        }

        case 3: {
            printf("Exiting....");
            break;
        }
        default: {
            printf("Please Enter valid choice ");
        }
        };
        int i;
        struct node* ptr;
        ptr = head;
        if (ptr == NULL) {
            printf("Stack is empty\n");
        } else {
            printf("Printing Stack elements \n");
            while (ptr != NULL) {
                printf("%d\n", ptr->val);
                ptr = ptr->next;
            }
        }
    }
    return 0;
}
void push()
{
    int val;
    struct node* ptr = (struct node*)malloc(sizeof(struct node));
    if (ptr == NULL) {
        printf("not able to push the element");
    } else {
        printf("Enter the value");
        scanf("%d", &val);
        if (head == NULL) {
            ptr->val = val;
            ptr->next = NULL;
            head = ptr;
        } else {
            ptr->val = val;
            ptr->next = head;
            head = ptr;
        }
        printf("Item pushed");
    }
}

void pop()
{
    int item;
    struct node* ptr;
    if (head == NULL) {
        printf("Underflow");
    } else {
        item = head->val;
        ptr = head;
        head = head->next;
        free(ptr);
        printf("Item popped");
    }
}
