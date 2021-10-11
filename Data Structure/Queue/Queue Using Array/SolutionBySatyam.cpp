#include <bits/stdc++.h>
using namespace std;
#define n 20

class Queues {
    int* arr;
    int front, rear;

public:
    Queues()
    {
        arr = new int[n];
        front = -1;
        rear = -1;
    }
    void enqueue(int x);
    int dequeue();
    bool isEmpty();
    int Front();
    int Rear();
    void display();
};

void Queues::enqueue(int x)
{
    if (rear == n - 1) {
        cout << "Queue Overflow !" << endl;
        return;
    } else {
        rear++;
        arr[rear] = x;

        if (front == -1) {
            front++;
        }
    }
}

int Queues::dequeue()
{
    int data;
    if (front == -1 || front > rear) {
        cout << "No elements in Queue" << endl;
        return -1;
    }

    else {
        data = arr[front];
        front++;
        return data;
    }
}

int Queues::Front()
{
    if (front == -1 || front > rear) {
        cout << "No elements in queue" << endl;
        return -1;
    } else {
        return arr[front];
    }
}

int Queues::Rear()
{
    if (rear == -1 || front > rear) {
        cout << "No element in queue" << endl;
        return -1;
    } else {
        return arr[rear];
    }
}

bool Queues::isEmpty()
{
    if (front == -1 || front > rear) {
        return true;
    } else {
        return false;
    }
}

void Queues::display()
{

    if (front == -1)
        cout << "\nStack is empty";
    else {
        for (int i = front; i <= rear; i++)
            cout << arr[i] << " ";
    }
}

int main()
{
    Queues q;
    int val;
    char choice;
    cout << "a. For Enqueue " << endl;
    cout << "b. For Dequeue " << endl;
    cout << "c. To Display The Queue" << endl;
    cout << "d. To Exit" << endl;
    do {
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice) 
        {
        case 'a':
            cout << "Enter the value you want to enqueue: " ;
            cin >> val;
            q.enqueue(val);
            break;
        case 'b':
            cout << q.dequeue() << ": Dequeued from queue " << endl;
            break;
        case 'c':
            q.display();
            cout << endl;
            break;
        case 'd':
            exit(0);
            break;
        default:
            cout << "Enter a valid choice" << endl;
            break;
        }
    } while (choice != 'd');

    return 0;
}
