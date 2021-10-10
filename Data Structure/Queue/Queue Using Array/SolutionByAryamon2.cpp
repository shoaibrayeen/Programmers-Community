//To apply concept of circular queues
#include <conio.h>
#include <iostream.h>
#include <process.h>

#define size 100

int front = -1;
int rear = -1;
int* a = new int[size];

int isempty()
{
    if (front == -1) {
        return 0; //empty
    }
    return 1;
}

int isfull()
{
    if ((rear + 1) % size == front) {
        return 0; //full
    }
    return 1;
}

void enqueue(int val)
{
    if (isfull() == 0) {
        cout << "\nQueue is full\n ";
        return;
    }
    if (front == -1) {

        front++;
        front = front % size;
    }
    rear++;
    rear = rear % size;
    a[rear] = val;
}

int dequeue()
{
    if (isempty() == 0) {
        cout << "\nQueue is empty\n ";
        return -1;
    }
    int temp = front;
    front = (front + 1) % size;
    return a[temp];
}
void display()
{
    for (int i = front; i != rear; i = (i + 1) % size) {
        cout << a[i] << "\t";
    }
    cout << a[rear];
}
void main()
{
    char ch;
    int val;
    clrscr();
    while (1) {
        cout << "\n**********MAIN MENU*******\n";
        cout << "\n1.Enqueue\n2.Dequeue\n3.Display\n4.Exit\n";
        cout << "\nEnter your option\n ";
        cin >> ch;
        switch (ch) {
        case '1':
            cout << "\nEnter Value\t:\t";
            cin >> val;
            enqueue(val);
            break;

        case '2':
            int retVal = dequeue();
            if (retVal != -1) {
                cout << "\nDequeued Element\t:\t" << retVal;
            }
            break;

        case '3':
            display();
            break;
        case '4':
            exit(0);

        default:
            cout << "\nInvalid choice\n";
        }
    }
    // getch();
}
