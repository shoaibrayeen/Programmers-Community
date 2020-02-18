import java.util.Scanner;
class SearchInLL
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

  public static boolean search(Node head, int x)
  {
  	while(head!=null)
  	{
  		if(x== head.data)
  			return true;
  		head = head.next;
  	}
  	return false;
  }

  public static void searchll(Node head, int x)
  {
  	if(search(head,x))
  		System.out.print("YES");
  	else
  		System.out.print("NO");
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
		SearchInLL ll = new SearchInLL();
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
    System.out.print("Enter the element to be searched: ");
    int n = s.nextInt();
          ll.head = ll.head.next;
      searchll(ll.head,n);
  }
}
