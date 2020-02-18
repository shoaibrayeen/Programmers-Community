import java.util.Scanner;
class DetectLoop
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

	public static boolean detect(Node head)
	{
	  Node slow = head;
	  Node fast = head;

	  while(fast!=null)
	  {
	    slow = slow.next;
	    fast = fast.next.next;

	    if(slow == fast)
	    return true;

	  }
	  return false;
	}

	public static void detectLoop(Node head)
	{
	 if(detect(head))
	 System.out.println("yes");
	 else
	 System.out.println("No");
	}
    
	public static void main(String[] args) {

		DetectLoop ll = new DetectLoop();

		ll.head = new Node(1);
		Node second = new Node(2);
		ll.head.next = second;
		Node third = new Node(3);
		second.next = third;
		Node fourth = new Node(4);
		third.next = fourth;

		//detecting a loop in a singly linked list
		detectLoop(ll.head);

		//making a loop in a linked list
		fourth.next = second;
		
		//detecting a loop again
		detectLoop(ll.head);
	}

}
