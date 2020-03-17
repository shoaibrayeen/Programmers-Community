import java.util.Scanner;
class SortLL
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

	public static Node getMid(Node head)
	{
		if(head == null || head.next == null)
			return head;

		Node fast, slow;
		fast = slow = head;
        
		while(fast.next != null && fast.next.next!= null)
			{
				slow = slow.next;
				fast = fast.next.next;
			}

		return slow;
         }
	public static Node mergeSort(Node head)
	{
		Node temp = head;
		if(temp == null || temp.next == null)
			return temp;

		Node middle = getMid(temp);
		Node midnext = middle.next;
		Node right = mergeSort(midnext);
		middle.next = null;

		Node left = mergeSort(head);
		

		Node sortedlist = merge(left, right);
		return sortedlist;
	}

	public static Node merge(Node a, Node b)
	{
		if(a == null)
			return b;
		if(b == null)
			return a;

        Node result = null;

		if(a.data<=b.data)
		{
			result = a;
			result.next = merge(a.next, b);
		}
	    else
	    {
	    	result = b;
	    	result.next = merge(a,b.next);
	    }
	    return result;
	}
    
    public static void printList(Node head)
    {
    	while(head!=null)
    	{
    		System.out.print(head.data+" ");
    		head = head.next;
    	}
    	System.out.println();
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
		SortLL ll = new SortLL();
		 ll.head = new Node(0);
   

    System.out.println("Do you want to enter element(y/n) ");
    Scanner s = new Scanner(System.in);
     char choice = (s.next()).charAt(0);
     if(choice=='y')
    {
         do
        {
                insertAtEnd(ll.head);
                System.out.println("Do you want to add more element(y/n)");
                choice = (s.next()).charAt(0);
                 }while(choice=='y');
    }
    else
    {
      System.out.print("The list is empty");
      return;
    }
   ll.head = ll.head.next;
   System.out.print("Initially: ");
   printList(ll.head);
   ll.head = mergeSort(ll.head);
   System.out.print("After sorting: ");
   printList(ll.head);
	}
}
