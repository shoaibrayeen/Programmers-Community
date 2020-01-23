class StackLL
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

	public void push(int x)

	{
		Node t = new Node(x);
        t.next = head.next;
        head.next = t;
	}
	public void pop()
	{
		if(head.next == null)
		{
			System.out.println("Stack underflow");
		}
		else if(head.next.next == null)
			head.next = null;
		else
		head.next = head.next.next;
	}

	public int top()
	{
		return head.next.data;
	}
   
   public boolean isEmpty()
   {
   	if(head.next == null)
   		return true;

   	return false;
   }
    public void print()
    {
    	Node t = head.next;
    	System.out.print("Stack: ");
    	    	while(t!=null)
    	{
    		System.out.print(t.data+" ");
    		t = t.next;
    	}
    	System.out.println();
    }
   public static void main(String[] args)
    {
   	StackLL s = new StackLL();
   	s.head = new Node(0);
   	s.push(3);
   	s.print();
   	s.push(5);
   	s.print();
   	s.pop();
   	s.print();
   	System.out.println("Top(): "+s.top());
   	System.out.println("isEmpty(): "+s.isEmpty());


   }

}
