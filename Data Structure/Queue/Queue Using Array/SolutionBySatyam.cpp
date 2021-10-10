#include <bits/stdc++.h>
using namespace std;

class Queue {
    int rear, front;
    int size;
    int* arr;

public:
    Queue(int s)
    {
        front = rear = -1;
        size = s;
        arr = new int[s];
    }
    void enQueue(int data);
    int deQueue();
    void displayQueue();
};
void Queue::enQueue(int data)
{
    if ((front == 0) && (rear == size - 1) || (rear == (front - 1))) {
        cout << "Queue is full" << endl;
    } else if (front == -1) {
        front = 0;
        rear = 0;
        arr[rear] = data;
    } else if (rear == size - 1 && front != 0) {
        rear = 0;
        arr[rear] = data;
    } else {
        rear++;
        arr[rear] = data;
    }
    cout << data << " enQueued in the queue" << endl;
}

int Queue::deQueue()
{
    if (front == -1) {
        cout << "Queue is empty!" << endl;
        return INT_MIN;
    }
    int data = arr[front];

    if (front == rear) {
        front = -1;
        rear = -1;
    }

    else {
        front = ((front + 1) % size);
    }
    return data;
}

void Queue::displayQueue()
{
    if (front == -1) {
        cout << "Queue is empty" << endl;
        return;
    }
    cout << "The elements in Circular Queue are: " << endl;
    if (rear >= front) {
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    } else {
        for (int i = front; i <= size; i++) {
            cout << arr[i] << " ";
        }
        for (int i = 0; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
}

int main()
{
    Queue q(6);
    q.enQueue(5);
    q.enQueue(10);
    q.enQueue(15);
    q.enQueue(20);
    q.enQueue(25);

    q.displayQueue();

    cout << q.deQueue() << ": deQueued from queue" << endl;
    cout << q.deQueue() << ": deQueued from queue" << endl;

    q.displayQueue();

    q.enQueue(30);

    q.displayQueue();

    return 0;
}