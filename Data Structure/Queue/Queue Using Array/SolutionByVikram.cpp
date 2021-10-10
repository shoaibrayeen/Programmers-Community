// Author : Vikram D Singh
// Date :
#include <bits/stdc++.h>
using namespace std;
int q[1000], front = 0, rear = 0;
void Enqueue(int data)
{
    if (rear == 1000)
        cout << "Overflow Condition" << endl;
    else
    {
        q[rear++] = data;
    }
}
int Dequeue()
{
    if (front == rear)
    {
        cout << "Underflow Condition" << endl;
        return 0;
    }
    else
        return q[front++];
}
void display()
{
    for (int i = front; i < rear; i++)
    {
        cout << q[i] << " ";
    }
    cout << endl;
}

int main()
{
    int choice;
    cout << "Queue using array" << endl;
    do
    {
        cout << "1. Insertion into Queue" << endl;
        cout << "2. Deletion from Queue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit " << endl;
        cin >> choice;
        switch (choice)
        {
        case 1:
        {
            cout << "Enter the number to add in queue: ";
            int n;
            cin >> n;
            Enqueue(n);
        }
        break;
        case 2:
        {
            cout << "The deleted number is " << Dequeue() << endl;
        }
        break;
        case 3:
        {
            display();
        }
        break;
        }
    } while (choice != 4);

    return 0;
}