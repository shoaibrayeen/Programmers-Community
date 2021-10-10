#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class Stack {
    Node* head;
    int size; // number of elements present in stack
public:
    Stack()
    {
        size = 0;
        head = NULL;
    }
    /*
      Returns the size of stack i.e. count of elements which are present ins stack right now. Time - O(1).
    */
    int getSize()
    {
        return size;
    }
    /*
      Checks if the stack is empty or not. Returns true or false.
    */
    bool isEmpty()
    {
        return size == 0;
    }
    /*
      This function takes one argument of type int and has return type void. 
      This function inserts an element in the stack. Time complexity - O(1).
    */
    void push(int element)
    {
        Node* newNode = new Node(element);
        newNode->next = head;
        head = newNode;
        size++;
    }
    /*
      This function takes no input arguments and has return type int. 
      This removes the last element which is entered and return that element as an answer. Returns 0 if stack is empty.
      Time complexity - O(1).
    */
    int pop()
    {
        // Return 0 if stack is empty.
        if (isEmpty()) {
            return 0;
        }
        Node* temp = head;
        int ans = temp->data;
        head = head->next;
        delete temp;
        size--;
        return ans;
    }
    /*
      This function takes no input arguments and has return type int. 
      This returns the last element which is entered and returns that element as an answer. Returns 0 if stack is empty.
      Time complexity - O(1).
    */
    int top()
    {
        // Return 0 if stack is empty.
        if (isEmpty()) {
            return 0;
        }
        return head->data;
    }
};

int main()
{
    // TEST CASE
    /*
      Input: 1 3 1 4 1 63 1 21 1 9 2 3 1 7 2 2 2 3 1 799 1 33 1 35 3 -1
      Output: 9 21 7 21 63 4 35
    */

    Stack st;

    cout << "1. Push" << endl;
    cout << "2. Pop" << endl;
    cout << "3. Top" << endl;
    cout << "4. Size" << endl;
    cout << "5. isEmpty" << endl;

    int choice;
    cin >> choice;
    int input;

    while (choice != -1) {
        if (choice == 1) {
            cin >> input;
            st.push(input);
        } else if (choice == 2) {
            int ans = st.pop();
            if (ans != 0) {
                cout << ans << endl;
            } else {
                cout << "-1" << endl;
            }
        } else if (choice == 3) {
            int ans = st.top();
            if (ans != 0) {
                cout << ans << endl;
            } else {
                cout << "-1" << endl;
            }
        } else if (choice == 4) {
            cout << st.getSize() << endl;
        } else if (choice == 5) {
            cout << st.isEmpty() << endl;
        }
        cin >> choice;
    }
}
