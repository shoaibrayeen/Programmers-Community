
import java.util.*;    
class  Node
{
    int data;
    Node next;
    Node(int data)
    {
       this.data=data;
       this.next=null;
    }
    
}

public class Linked_list
{   
    static Node head;

	public static void main(String[] args)
  {
		/**
		Aim: To find the second largest element in the Array 
		*/
		Linked_list obj= new Linked_list();
		Node h=obj.input();
		System.out.println(h.data);
		System.out.println("The length of the linked list is "+obj.find_length(h));
		
	}
	Node input()
	{
	    /**
	    Aim: To input the elements of the linked list.
	    Output: Output a pointer to the head of the list.
	    */
	    Node h=null;
	    int element=0;
	    Scanner sc=new Scanner(System.in);
	    int counter=0; // to enter elements only till counter is 0
	    System.out.println("Enter the elements of the linked list.");
	    while(counter==0)
	    {   
	        System.out.println("Enter the element.");
	        if(head==null)
	        {
	            h=new Node(sc.nextInt());
	            head=h;
	            
	        }
	        else
	        {
	            h.next=new Node(sc.nextInt());
	            h=h.next;
	        }
	        
	        System.out.println("Enter 0 to continue adding elements of the linked list, or any other number to exit.");
	        counter=sc.nextInt();
	    }
	    return head;
	}
	int find_length(Node h)
	{
	    /**
	    Aim: To find the second largest element in the linked list
	    Input: 
	        h:Node pointing to the head or first element in the linked list
	    Output: Returning the length of the linked list
	    */
	    int length=0;
	    while(h!=null)
	    {
	        h=h.next;
	        length++;
	    }
	    return length;
	}
	
	
}
		
