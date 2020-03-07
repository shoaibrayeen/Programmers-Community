#creating a node
class Node:
    def __init__(self,data):
        self.value=data
        self.next=None
        
#creating LinearQueue class
class LinearQueue:
    def __init__(self):
        self.front=None
        self.rear=None
    def enqueue(self, newelement):
        newnode=Node(newelement)
        if(self.rear is None):
            self.front=newnode
            self.rear=newnode
            print("Element enqueued successfully!")
            return;
        self.rear.next=newnode
        self.rear=newnode
        print("Element enqueued successfully!")
        return;
    def dequeue(self):
        if self.front is None and self.rear is None:
            print("Queue is empty! ")
            return;
        temp=self.front
        self.front=self.front.next
        if(self.front==None):
            self.rear=None
        print("Element dequeued successfully:",temp.value)
        del temp
        return;
    #method to print the Queue
    def printQueue(self): 
        temp = self.front 
        if temp is None:
            print("Queue is empty")
            return;
        while (temp): 
            print (temp.value) 
            temp = temp.next
            
  
    #method which is basically used as a switcher
    def switch_case_implementation(self):
        print("Enter:\n1. To Enqueue an element\n2. To Dequeue element\n3. Print the queue\n4. Exit")
        while(True):
            choice=int(input("Enter Your Choice:"))
            if choice==1:
                insertitem=int(input("Enter your element"))
                self.enqueue(insertitem)
            elif choice==2:
                self.dequeue()
            elif choice==3:
                self.printQueue()
            elif choice==4:
                print("Exiting")
                return;
            else:
                print("Enter a valid choice!")
#main
if __name__=="__main__":
    myQueue=LinearQueue()
    myQueue.switch_case_implementation()
