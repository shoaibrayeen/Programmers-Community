import java.util.Stack;
import java.util.Scanner;
class CheckPalinLL
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
public static boolean ifPalindromeOdd(Node head)
 {
   if(head == null || head.next == null)
    return true;

  Stack<Node> s = new Stack<Node>();
    
  Node slow, fast;
  slow = fast = head;
   // s.push(slow);
  while(fast.next!=null && fast!=null)
  {
    s.push(slow);
    slow = slow.next;
    fast = fast.next.next;
     
  }
  
  if(fast.next == null)
    s.push(slow);

  
  while(slow!=null )
  {
    if(s.pop().data!=slow.data)
    return false;
    
     slow = slow.next;
  }
  return true;
 }
 public static boolean ifPalindromeEven(Node head)
 {
   if(head == null || head.next == null)
    return true;

  Stack<Node> s = new Stack<Node>();
    
  Node slow, fast;
  slow = fast = head;
   s.push(slow);
  while(fast.next.next!=null && fast.next!=null)
  {
  
    slow = slow.next;
    fast = fast.next.next;
     s.push(slow);
  }
  
  if(fast.next == null)
    s.pop();

  slow = slow.next;
  while(slow!=null )
  {
    if(s.pop().data!=slow.data)
    return false;
    
     slow = slow.next;
  }
  return true;
 }
 public static boolean even(Node head)
 {
  int count = 1;
  while(head.next!=null)
  {
    head = head.next;
    count++;
  }
  if(count%2==0)
    return true;
  return false;
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
  
   CheckPalinLL ll = new CheckPalinLL();
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
  if(even(ll.head))
  ifPalindromeEvenFinal(ll.head);
 else
  ifPalindromeOddFinal(ll.head);
 }

 public static void ifPalindromeEvenFinal(Node head)
 {
  if(ifPalindromeEven(head))
  System.out.println("Yes");

  else
    System.out.println("No");
 }
 public static void ifPalindromeOddFinal(Node head)
 {
  if(ifPalindromeOdd(head))
  System.out.println("Yes");

  else
    System.out.println("No");
 }

}
