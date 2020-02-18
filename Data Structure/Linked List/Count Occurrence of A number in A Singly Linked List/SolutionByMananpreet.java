import java.util.Scanner;
class CountOccurence
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
  
  public static int count(Node head, int num)
  {
  	int count = 0;
  	while(head.next!=null)
  	{
  		if(head.data == num)
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
  	System.out.print("Enter the number you want to count the occurence of");
  	int num = s.nextInt();
  	CountOccurence ll = new CountOccurence();
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

   ll.head = ll.head.next;
   System.out.print("The number "+num+" occured "+count(ll.head,num)+" times in the given linked list");
  }
}
