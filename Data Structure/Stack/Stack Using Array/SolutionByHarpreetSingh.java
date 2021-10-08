import java.util.*;
public class SolutionByHarpreetSingh {
    public static Scanner scn = new Scanner(System.in);
    public static class stack{
        private int[] arr;
        private int tos;
        private int NoOfElements;
        private int MaxCapacity;
        stack(int size){
            initialize(size);
        }
        stack(){
            this(15);
        }
    
        protected void initialize(int size){
           this.NoOfElements = 0;
            this.MaxCapacity = size;
            this.arr = new int[this.MaxCapacity];
            this.tos = -1;
        }
      
        private void overflowException() throws Exception{
            if(this.NoOfElements == this.MaxCapacity)
            throw new Exception("StackIsOverflow");
        }
        private void underflowException() throws Exception{
            if(this.NoOfElements == 0){
                throw new Exception("StackIsUnderflow");
            }
        }
         public int size(){
            return this.NoOfElements;
        }
        public int MaxCapacity(){
            return this.MaxCapacity;
        }
        public void push(int ele) throws Exception{
            overflowException();
            this.arr[++this.tos] = ele;
            this.NoOfElements++;
        }
        public int peek() throws Exception{
                underflowException();
                return this.arr[this.tos];
        }
        public int pop() throws Exception{
            underflowException();
            this.NoOfElements--;
            return arr[tos--];
        }
        public void displayStack(){
            for(int i=this.tos;i>=0;i--){
                System.out.print(arr[i]+" ");
            }
            System.out.println();
        }
    
    }

   
        public static void main(String[] args) throws Exception{
            System.out.print("Enter the size of the stack: ");
            int n = scn.nextInt();
            stack st = new stack(n);

            
            int ch=5;
            boolean flag=true;
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
