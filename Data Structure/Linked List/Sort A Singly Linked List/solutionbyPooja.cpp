/*
    A linked list is given and you need to sort it.
    using insertion sort;
*/

#include <iostream>
using namespace std;

struct node {
    int data;
    node* next;
};

class linked_list {
public:
    node* first;

    linked_list()
    {
        first = NULL;
    }
    void insert_at_end(int);
    void sort_list();
    void display();
};
void linked_list::insert_at_end(int data)
{
    node* temp = new node();
    node* temp1 = new node();
    temp->data = data;
    temp->next = NULL;

    if (first == NULL)
        first = temp;
    else {
        temp1 = first;
        while (temp1->next != NULL)
            temp1 = temp1->next;
        temp1->next = temp;
    }
}
void linked_list::display()
{
    if (first == NULL)
        cout << " List is empty";
    else {
        node* temp = new node;
        temp = first;
        while (temp != NULL) {
            cout << temp->data << "  ";
            temp = temp->next;
        }
    }
}
void linked_list::sort_list()
{
    int val, count;
    node *temp, *temp2, *temp3;

    for (temp = first->next; temp != NULL; temp = temp->next) //initially temp points to 2nd element
    {
        count = 0;
        val = temp->data;
        temp2 = first;
        while (temp2->next != temp) //temp2 points to points the elements which is just previous of temp;
            temp2 = temp2->next;

        for (; val < temp2->data;) //and temp2 is going to backtrack till first if its value is greater than then "val";
        {
            temp2->next->data = temp2->data;
            if (temp2 == first) {
                count++;
                break;
            }
            temp3 = first; //temp3 poitns to the element which is just previous of temp3 and also it help temp2 to reach till first;
            while (temp3->next != temp2)
                temp3 = temp3->next;
            temp2 = temp3;
        }
        if (count == 1)
            temp2->data = val;
        else
            temp2->next->data = val;
    }
}

int main()
{
    char ch;
    int data;
    linked_list obj;

    cout << "Do you want to enter element(y/n)";
    cin >> ch;
    if (ch == 'y') {
        do {
            cout << "Enter data ";
            cin >> data;
            obj.insert_at_end(data);
            cout << "\nDo you want to enter more element(y/n)? ";
            cin >> ch;
        } while (ch == 'y');
    }
    cout << "\nList element before sorting ";
    obj.display();
    cout << "\nList element after sorting ";
    obj.sort_list();
    obj.display();
}
