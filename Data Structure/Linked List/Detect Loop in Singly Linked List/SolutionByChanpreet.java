public class LoopInLL {

	/*
	 * Problem- A linked list is given and you need to detect if there exists any loop in the linked list or not.
	 * Approach- Using 2pointers to iterate the linkedList
	 */
	
	class Node{
		int data;
		Node next;
		Node(int data){
			this.data = data;
			this.next = null;
		}
	}
	Node start;
	
	public LoopInLL() {
		start = null;
	}
	
	//insertion at the beginning 
	public void insert(int data) {
		if(start == null)
			start = new Node(data);
		else{
			Node new_node = new Node(data);
			new_node.next = start;
			start = new_node;
		}
	}
	
	
	//CHECK FOR LOOP
	public boolean hasLoop(){
		//If the list is already empty then ofcourse there is no loop
		if(start == null){
			return false;		
		}
		Node ptr1 = start;
		Node ptr2 = start;
		while(ptr2 != null){
			//ptr1 is incremented by 1 while ptr2 moves with double speed wrt ptr1 
			//the loop occurs when both coincide
			ptr1 = ptr1.next;
			ptr2 = ptr2.next.next;
			if(ptr1 == ptr2){
				return true;
			}
		}
		return false;
	} 
	
	
	//FUNCTION TO DISPLAY THE LINKED LIST
	void disp(){
		if(start == null){
			System.out.println("Already empty");
			return;
		}
		Node temp = start;
		while( temp.next != null){
			System.out.print(temp.data+"->");
			temp = temp.next;
		}
		System.out.println(temp.data);
	}

	
	//MAIN
	public static void main(String[] args) {
		
		LoopInLL obj = new LoopInLL();
		
		//making a static linked list
		obj.insert(30);
		obj.insert(46);
		obj.insert(1);
		obj.insert(99);
		System.out.println("Linked List before making the loop");
		obj.disp();
		
		System.out.println("\nNow making a loop in the linked list");
		
		//the second last node now points to start
		obj.start.next.next.next = obj.start; 
        
		if(obj.hasLoop()){
        	System.out.println("Yes");
        }
        else{
        	System.out.println("No");
        }	
	}
}
