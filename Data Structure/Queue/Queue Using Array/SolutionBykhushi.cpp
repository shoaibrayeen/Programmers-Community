#include <iostream>
using namespace std;
int queue[100], n = 100, front = -1, rear = -1;
void enqueue()
{
    int val;
    if (rear == n - 1)
        cout << "Queue Overflow" << endl;
    else {
        if (front == -1)
            front = 0;
        cout << "Insert the element in queue : " << endl;
        cin >> val;
        rear++;
        queue[rear] = val;
    }
}
void Dequeue()
{
    if (front == -1 || front > rear) {
        cout << "Queue Underflow ";
        return;
    } else {
        cout << "Element deleted from queue is : " << queue[front] << endl;
        front++;
        ;
    }
}

int main()
{
    int ch;
    cout << "1) Insert element to queue" << endl;
    cout << "2) Delete element from queue" << endl;
    cout << "3) Exit" << endl;
    do {
        cout << "Enter your choice : " << endl;
        cin >> ch;
        switch (ch) {
        case 1:
            enqueue();
            break;
        case 2:
            Dequeue();
            break;

        case 3:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice" << endl;
        }
    } while (ch != 3);
    if (front == -1)
        cout << "Queue is empty" << endl;
    else {
        cout << "Queue elements are : ";
        for (int i = front; i <= rear; i++)
            cout << queue[i] << " ";
        cout << endl;
    }
    return 0;
}
