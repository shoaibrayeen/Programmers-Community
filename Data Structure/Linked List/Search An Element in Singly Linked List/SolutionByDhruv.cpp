/* Program to search the specified element in a given linked list*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
int check(int element, node *start);
struct node
{
 int data;
 node *next;
 }*temp, *t;                                  // Pointer defined for linked list

void main()
{
 int element, searched_element;
 node *start = NULL;
 temp = new node();
 cout<<"Enter element";
 cin>>temp->data;
 if(start == NULL)
 {
   start = temp;
   }
   else
   {
     t = start;
    // t = t->next;
     t->next = temp;
     }
   cout<<"/nEnter element to be searched";
   cin>>element;
   searched_element = check(element, *start);
   if(searched_element == 1)
   {
     cout<<"Element found";
     }
     else
     {
      cout<<"Element not found";
      }
 getch();
}

int check(int element,node *start)                    // Function to check the availability of the element in the list
{
 t = start;
 while(t!=NULL)
 {
   if(t->data == element)
   {
     return 1;
     t=t->next;
     }

   return 0;
  }
}
