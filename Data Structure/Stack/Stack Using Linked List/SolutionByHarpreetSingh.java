import java.util.*;
public class SolutionByHarpreetSingh {
    public static Scanner scn =new Scanner(System.in);
    public static class stack {
        public class Node{
            int data = 0;
            Node next = null;
            
            public Node(){

            }
            public Node(int data){
                this.data = data;
            }
        }
        private int size = 0;
        private Node head = null;
        private Node tail = null;

        private void underflowException() throws Exception{
            if(this.size==0){
                throw new Exception("Stack Underflow");
            }
        }



        public void addFirst(Node node){
            if(this.head == null){
                this.head = this.tail = node;
            }
            else{
                node.next = this.head;
                this.head = node;
            }
            this.size++;
        }
    
        public Node removeFirst(){
            Node node = this.head;
            if(this.size == 1){
                this.head = this.tail = null;
            }
            else{
                this.head = node.next;
            }
            node.next = null;
            this.size--;
            return node;
        }
    
        public int size(){
            return this.size;
        }
    
        public void push(int data){
            addFirst(new Node(data));
        }
    
        public int peek() throws Exception{
            underflowException();
            return this.head.data;
        }
    
        public int pop() throws Exception{
            underflowException();
            return removeFirst().data;
        }
        public void displayStack() throws Exception{
            underflowException();
            Node node = this.head;
            while(node!=null){
                System.out.print(node.data+" ");
                node=node.next;
            }
            System.out.println();
        }
    
    } 
    public static void main(String[] args) throws Exception{
        stack st = new stack();
        int ch=5;
        do{
         System.out.println();
         System.out.println("Menu");
         System.out.println("1.Push");
         System.out.println("2.Pop");
         System.out.println("3.Peek");
         System.out.println("4.Display Stack");
         System.out.println("5.exit");
        ch = scn.nextInt();
         switch(ch){
             case 1:
             System.out.print("Enter the element: ");
             st.push(scn.nextInt());
             break;
             case 2:
             System.out.println("Popped element is: " + st.pop());
             break;
             case 3:
             System.out.println("Peek element is: " + st.peek());
             break;
             case 4:
             st.displayStack();
             break;
             default:
             System.exit(0);
         }
        }while(true);
    }
}
