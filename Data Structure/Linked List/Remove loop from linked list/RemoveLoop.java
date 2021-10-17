
public class RemoveLoop{

    static class Node{
        Node next;
        int data;

        Node(int data){
            this.data = data;
            this.next = null;
        }
    }
    public static void main(String[] args){
        
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of elements in list");
        int n = sc.nextInt();
        int num;
        
        Node node = new Node(-1);
        Node temp = node;
        for(int i = 0 ; i < n ; i++){
            System.out.println("Enter the element");
            num = sc.nextInt();
            temp.next = new Node(num);
            temp = temp.next;
        }
        node = node.next;
        System.out.println("Enter the position where you want to create the loop");
        int pos = sc.nextInt();

        //Create loop at postion entered by user
        createLoopedList(node,pos);
        try{
            sc.close();
        }catch(Exception e){
            System.out.println("Could not close scanner "+e);
        }
        //Function to detect loop in linkedList
        boolean isCyclePresent = findCycle(node);
        if(isCyclePresent){
            System.out.println("The linked list contains a loop.");
            removeLoop(node);
            System.out.println("The linked list after removing the loop.");
            printLinkedList(node);
        }else{
            printLinkedList(node);
            System.out.println("The linked list does not contains a loop.");
        }
    }

    static void createLoopedList(Node node, int pos){
        if(pos <= 0)
        return ;
        Node curr = node;
        Node last = node;

        int currPos = 1;
        while(curr != null && currPos < pos){
            curr = curr.next;
            currPos++;
        }

        //If position is greater than the number of elements, do not create a loop
        if(curr == null)
        return;

        while(last.next != null){
            last = last.next;
        }
        last.next = curr;
        
    }

    static void removeLoop(Node head){
        
        //Initializing 2 points. Fast will take 2 steps and slow will take 1 step forward.
        Node fast = head,slow = head;

        while(slow!= null && fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
           
           //If loop is present, fast and slow will become equal and we will come out of the loop
            if(fast == slow)
                break;
        }
        //Move fast pointer to beginning to the list
        fast = head;

        //If loop is not at head node
        if(slow != fast){
            while(fast != null && slow != null){

                //If both pointers have the next node same implies that a loop is present at that point
                if(fast.next == slow.next){
                    slow.next = null;
                    return;
                }
                fast = fast.next;
                slow = slow.next;
            }
        }else{//Loop is at head node
            while(fast != slow.next){
                slow = slow.next;
            }
            slow.next = null;
        }
    }


    static void printLinkedList(Node head){
        Node temp = head;

        //Print data of the linked list until it reaches the end
        while(temp != null){
            System.out.print(temp.data+"->");
            temp = temp.next;
        }
        System.out.print("NULL");
    }

    static boolean findCycle(Node head){
        
        //Initializing 2 points. Fast will take 2 steps and slow will take 1 step forward.
        Node fast = head,slow = head;

        while(slow!= null && fast != null && fast.next != null){
            fast = fast.next.next;
            slow = slow.next;
           
           //If loop is present, fast and slow will become equal at some point
            if(fast == slow)
            return true;
        }

        //If loop is not present, fast and slow will never become equal
        return false;
    }
}

/*
Input: 1 -> 2 -> 3 -> 4 ->5 ->
            |________________|
 Loop is present at the 2nd element.
Output: 1 -> 2 -> 3 -> 4 -> 5 ->null
Time complexity - O(n)
Space complexity - O(1)
*/