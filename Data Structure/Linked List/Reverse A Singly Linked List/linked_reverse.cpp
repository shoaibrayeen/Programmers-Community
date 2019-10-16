#include<iostream>
using namespace std;

/* A linked list which contains two values : an integer data and the pointer to the next Node.
*/
class NODE
{
    int key;
    NODE *next;
    public:
        NODE* reverse(NODE *start);
}

/*NODE* reverse(NODE *start):
parameters: a pointer to the head of the linked list.
returns: a pointer to the head of the reversed list.
*/
NODE* NODE :: reverse(NODE *start)
{
    NODE *x, *y = NULL;//y is set to NULL to easily set the next of the first node to NULL.
    while(start)
    {
        x = start;
        start = start->next;
        x->next = y;
        y = x;
    }
    return x;//x is the pointer to the head of the reversed list.
}