import java.util.Scanner;
class NthNode
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

	public static Node nthFromEnd(Node head, int n)
	{
		int count = count(head);
        int tab = count - n + 1;
         count = 1;
        while(count<tab && head!=null)
        {
        	head = head.next;
        	count++;
        }
        return head;
	}

	public static int count(Node head)
	{
		int count = 0;
		while(head.next!=null)
		{
			head = head.next;
			count++;
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
    	NthNode ll = new NthNode();
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
    System.out.print("Enter n less that or equal to "+count(ll.head)+": ");
    int n = s.nextInt();
     ll.head = ll.head.next;
     System.out.println((nthFromEnd(ll.head,n)).data);
    
 }}
