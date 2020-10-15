#include<iostream.h>
#include<conio.h>
#include<dos.h> //for delay function
#include<stdio.h>//for gets function
#include<process.h> //for exit function

struct NODE
{
  int code;
  char name[20];
  NODE *next;
};

void main()
{
clrscr();
int choice,ch,pos,size,ecode,found,d=0;
NODE *first,*fresh,*last,*temp,*back;
first=NULL;
cout<<"\nEnter the Size of the List to be Created : ";
cin>>size;
 for(int i=0;i<size;i++)
 {
 fresh=new NODE;
  cout<<"\nEnter the Code: ";
 cin>>fresh->code;
  cout<<"\nEnter the Name: ";
 gets(fresh->name);
  if(i==0)
  {
  fresh->next=first;
  first=fresh;
  }
  else
  {
  fresh->next=NULL;
  last->next=fresh;
  }
 last=fresh;
 }

do
{
clrscr();
cout<<"\n\n\t\t\t\t   ::WELCOME::";
cout<<"\n\n\t\t\t\t ::LINKED LISTS::";
cout<<"\n\nYour Options Are:-";
cout<<"\n\n1.Press 1 to INSERT a new Node.";
cout<<"\n\n2.Press 2 for TRAVERSAL in Lists.";
cout<<"\n\n3.Press 3 to SEARCH for a Node.";
cout<<"\n\n4.Press 4 to DELETE a Node.";
cout<<"\n\n5.Press 5 to get EXIT from the Program.";
cout<<"\n\nENTER YOUR CHOICE: ";
cin>>choice;

switch(choice)
{
case 1: /* Case to Insert a new node*/
clrscr();
cout<<"\n1.Press 1 to Insert the New Node in the Beginning of the List.";
cout<<"\n\n2.Press 2 to Insert the New Node in Between 2 Nodes.";
cout<<"\n\n3.Press 3 to Insert the New Node at a Specific Position.";
cout<<"\n\n4.Press 4 to Insert the New Node at the End of the List.";
cout<<"\n\nENTER YOUR CHOICE: ";
cin>>ch;
  switch(ch)
  {
  case 1: /*this nested case is used Insert the New Node in the Beginning*/
  fresh=new NODE;
  cout<<"\nEnter the Code: ";
  cin>>fresh->code;
  cout<<"\nEnter the Name: ";
  gets(fresh->name);
  fresh->next=first;
  first=fresh;
  cout<<"\nNew Node Created Successfully!!!";
  getch();
  break;

  case 2:  /*this nested case is used to Insert the New Node in Between two Nodes*/
  cout<<"\nEnter the Node's Code After which Insertion has to take Place: " ;
  cin>>ecode;
  temp=first;
  while((temp->code!=ecode)&&(temp!=NULL))
  temp=temp->next;
  fresh=new NODE;
  cout<<"\nEnter the Code: ";
  cin>>fresh->code;
  cout<<"\nEnter the Name: ";
  cin>>fresh->name;
  fresh->next=temp->next;
  temp->next=fresh;
  cout<<"\nNew Node Created Successfully!!!";
  getch();
  break;

  case 3:/*this nested case is used Insert the New Node at a Specific Position. */
  cout<<"\nEnter the Position At which Insertion has to Take Place: " ;
  cin>>pos;
  int i=0;
  NODE *newnode;
  newnode= new NODE;
  cout<<"\nEnter the Code: ";
  cin>>newnode->code;
  cout<<"\nEnter the Name: ";
   gets(newnode->name);
    newnode->next=NULL;
    temp=first;
    while(i<(pos-1))
    {
     last=temp;
     temp=temp->next;
     i++;
     }
     last->next=newnode;
     newnode->next=temp;
     cout<<"\nNew Node Created Successfully!!!";
     getch();
     break;

   case 4:/*this nested case is used to Insert the New Node at the End of the List.*/
   NODE *ptr;
   ptr=new NODE;
  cout<<"\nEnter the Code: ";
  cin>>ptr->code;
  cout<<"\nEnter the Name: ";
  gets(ptr->name);
   ptr->next=NULL;
   if(first== NULL)
	  first= last= ptr;

      else
       {
	 last->next= ptr;
	 last=ptr;
       }

   cout<<"\nNew Node Created Successfully!!!";
   getch();
   break;

  default:  //when no nested case matches
   cout<<"\nWrong Choice!!!Please Enter Again.";
   delay(2000);//delay 2000 milliseconds
   break;
  }

  break;

case 2:  /*this Case is for  TRAVERSAL in Lists */
if(first==NULL)
cout<<"\n\n\t\t\t\t LIST IS EMPTY!!!";
else
{
clrscr();
cout<<"\nThe Nodes Are:-\n";
for(temp=first;temp!=NULL;temp=temp->next)
{
cout<<"\nCODE = "<<temp->code;
cout<<"\nNAME = ";
puts(temp->name);
}
}
getch();
break;

case 3:  /*this case is used to SEARCH for a Node */
if(first==NULL)
cout<<"\n\n\t\t\t\t LIST IS EMPTY!!!";
else
{
clrscr();
cout<<"\nEnter the Code to be Searched: ";
cin>>ecode;
temp=first;
found=0;
while(temp!=NULL)
{
if(temp->code==ecode)
{
found=1;
break;
}

temp=temp->next;
}
if(found==1)
cout<<"\nEntered Code has NAME : "<<temp->name;
else
cout<<"\nSorry!!!Entered Code is Not Found!!!";
}
getch();
break;

case 4:      /*this Case is used to DELETE a Node */
if(first==NULL)
cout<<"\nLIST IS EMPTY!!!";
else
{
cout<<"\nEnter the Code to be Deleted: ";
cin>>ecode;
if(first->code==ecode)
{
temp=first;
first=first->next;
delete temp;
cout<<"\n\nNode Deleted Successfully!!!";
}
else
{
temp=first->next;
back=first;
while(temp!=NULL)
{
if(temp->code==ecode)
{
back->next=temp->next;
cout<<"\n\nNode Deleted Successfully!!!";
break;
}
back=temp;
temp=temp->next;
}
}
}
getch();
break;

case 5:/*case to get exit from the program*/
exit(0);
default:  //when no case matches
cout<<"\nWrong Choice!!!Please Enter Again.";
delay(2000);//delay 2000 milliseconds
}

}while(d==0);
getch();
}