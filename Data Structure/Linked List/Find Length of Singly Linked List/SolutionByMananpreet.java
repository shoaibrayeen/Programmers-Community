import java.util.Scanner;
class LengthOfLL
{
  Node head;
	static class Node
	{
	  Node next;
	  int data;

	  Node(int d)
	  {
	    data = d;
	    next = null;
	}

	}

	 public static int length(Node head)
	 {
	  int count = 1;
	   while(head.next!=null)
	   {
	     count++;
	     head = head.next;
	   }
	   return count;
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
	 	Scanner s = new Scanner(System.in);
	 	LengthOfLL ll = new LengthOfLL();
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
   System.out.println("No of elements in the linked list : "+length(ll.head));
	 }
}
