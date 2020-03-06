import sys
#creating a node
class Node:
    def __init__(self,data):
        self.value=data
        self.next=None

#creating Linked List class
class LinkedList:
    def __init__(self):
        self.head=None
    #method to insert data at the beginning of singly linked list
    def insertAtBeginning(self, newelement):
        newnode=Node(newelement)
        if self.head is None:
            self.head=newnode
            print("Insertion at the beginning is succesful")
            return;
        newnode.next=self.head
        self.head=newnode
        print("Insertion at the beginning is succesful")
        return;
    
    #method to insert data at the end of singly linked list  
    def insertAtEnd(self, newelement):
        newnode=Node(newelement)
        if self.head is None:
            self.head=newnode
            print("Insertion at the beginning is succesful")
            return;
        prev=self.head
        while(prev.next):
            prev=prev.next
        prev.next=newnode
        print("Insertion at the end is succesful")
        return;
    #method to delete data from the beginning
    def deleteFromBeginning(self):
        if self.head is None:
            return "The list is empty!";
        temp=self.head
        self.head=self.head.next
        temp=None
        print("Deletion from beginning is succesful")
        return;
    #method to delete data from the end
    def deleteFromEnd(self):
        if self.head is None:
            return "The list is empty!";
        prev=self.head
        while(prev.next.next):
            prev=prev.next
        prev.next=None
        print("Deletion from end is succesful")
        return;
    #method to print the singly linked list
    def printList(self): 
        temp = self.head 
        while (temp): 
            print (temp.value) 
            temp = temp.next
            
    #function which is basically used as a switcher
    def switch_case_implementation(self):
        print("Enter:\n1. To insert at the beginning\n2. To insert at the end\n3. To delete from beginning\n4. To delete from end\n5.To Print the list\n6.To exit\n")
        while(True):
            choice=int(input("Enter your choice:"))
            if choice==1:
                insertItem=int(input("Enter the item to be inserted:"))
                self.insertAtBeginning(insertItem)
            if choice==2:
                insertItem=int(input("Enter the item to be inserted:"))
                self.insertAtEnd(insertItem)
            if choice==3:
                self.deleteFromBeginning()
            if choice==4:
                self.deleteFromEnd()
            if choice==5:
                self.printList()
            if choice==6:
                print("Exiting")
                return;
  

#main
LL=LinkedList()
LL.switch_case_implementation()
