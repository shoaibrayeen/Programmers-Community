import java.util.HashSet;

public class LoopInLLUsingSet {
	
		/*
		 * Problem- A linked list is given and you need to detect if there exists any loop in the linked list or not.
		 * Approach- Using HashSet to store the previously occurred values
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
		
		public LoopInLLUsingSet() {
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
			
			Node ptr = start;
			HashSet<Node> hs = new HashSet<>();
			
			while(ptr != null ){
				//check if it is already encountered 
				if(hs.contains(ptr)){
					return true;
				}
				else{
					//if not encountered then dd it to hashSet
					hs.add(ptr);
				}
				//increment ptr
				ptr = ptr.next;
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
			
			LoopInLLUsingSet obj = new LoopInLLUsingSet();
			
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
