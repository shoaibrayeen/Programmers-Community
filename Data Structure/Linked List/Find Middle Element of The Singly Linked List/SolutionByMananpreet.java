import java.util.Scanner;
class MidLL2

{
	Node head;
	static class Node
	{
	  int data;
	  Node next;

	  Node(int d)
	  {
	    data = d;
	    next = null;
	  }
	}

	public static Node mid(Node head)
	{
	  Node slow, fast;
	  slow = fast = head;

	  while(fast.next!=null && fast.next.next!=null)
	  {
	   slow = slow.next;
	   fast = fast.next.next;

	  }
	  return slow;
	}
	 public static void insertAtEnd(Node head)
		 {
		  Scanner sc = new Scanner(System.in);
		  System.out.println("Enter data");
		  int d = sc.nextInt();
		  Node temp = new Node(d);
		 
		  Node last = head;
		  while(last.next!=null)
		  {
		    last = last.next;
		  }
		  last.next = temp;
		  return;
		 }
    public static void main(String[] args) {
    	MidLL2 ll = new MidLL2();
    	Scanner s = new Scanner(System.in);
    	ll.head = new Node(0);
	 	System.out.println("Do you want to enter element to your linked list(y/n) ");
   
     char choice = (s.next()).charAt(0);
     if(choice=='y')
    {
         do
        {
                insertAtEnd(ll.head);
                System.out.println("Do you want to add more element to your linked list(y/n)");
                choice = (s.next()).charAt(0);
                 }while(choice=='y');

    }
    else 
    {
    	System.out.println("No if elems: 0");
    	return;
    }

   ll.head = ll.head.next;
   System.out.print("The middle element is : "+(mid(ll.head)).data);
    }
}
