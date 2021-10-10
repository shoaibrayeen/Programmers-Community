//to apply the concept of queues as linked lists
#include <conio.h>
#include <iostream.h>
#include <process.h>

struct node {
    int info;
    node* next;
};

class Queue {
public:
    node *front, *rear;
    Queue()
    {
        front = rear = NULL;
    }
    void Enqueue(int);
    void Dequeue();
    void display();
};

void Queue::Enqueue(int val)
{
    node* temp = new node;
    temp->info = val;
    temp->next = NULL;

    if (front == NULL) {
        front = temp;
        rear = temp;
        return;
    }
    rear->next = temp;
    rear = temp;
}
void Queue::Dequeue()
{
    if (front == NULL) {
        cout << "\nQueue is empty\n ";
        return;
    }
    node* t = front;
    if (front == rear) {
        rear = NULL;
    }
    front = front->next;
    cout << "\nDequeued Element\t:\t" << t->info;
    delete t;
}
void Queue::display()
{
    if (front == NULL) {
        cout << "\nQueue is empty\n ";
        return;
    }
    cout << "\nQueue is\t";
    node* t = front;
    while (t != rear) {
        cout << t->info << "  ";
        t = t->next;
    }
    cout << rear->info;
}
void main()
{
    int val;
    clrscr();
    Queue obj;
    int ch;
    while (1) {
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cin >> ch;

        switch (ch) {
        case 1:
            cout << "\nEnter Value\t:\t";
            cin >> val;
            obj.Enqueue(val);
            break;
        case 2:
            obj.Dequeue();
            break;
        case 3:
            obj.display();
            break;
        case 4:
            exit(0);
        default:
            cout << "\nInvalid Choice\n";
        }
    }
    getch();
}
