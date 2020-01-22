#include <stdio.h>
#include <stdlib.h>
#define MAX 50

struct stack{
int data[MAX],top;
}s;

void init(){
s.top=-1;
}

int empty(){
return (s.top==-1);
}

int full(){
return (s.top==MAX-1);
}

void push(){
if(full()){
    printf("Stack is full.\n");
}
else{
    printf("Enter number.\n");
    scanf("%d",&s.data[++s.top]);
}
}
void pop(){
if(empty()){
    printf("Stack is empty.\n");
}
else{
    printf("Popped element is:%d\n",s.data[s.top--]);
}
}
int main()
{
    int ch;
    do{
        printf("Select a choice.\n0.Exit\n1.Push\n2.Pop\n");
        scanf("%d",&ch);
        switch(ch){
case 0:exit(0);
case 1:push();
break;
case 2:pop();
break;
default:printf("Invalid choice.\n");
        }
    }while(ch!=0);
    return 0;
}
