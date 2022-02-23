public class LoopInLL {
	
		/*
		 * Problem- A linked list is given and you need to detect if there exists any loop in the linked list or not.
		 * Approach- Using slow fast pointer approach
		 */
		
		class Node{
			int data;
			Node next;
			Node(int data){
				this.data = data;
				this.next = null;
			}
		}
		Node root;
		
		public LoopInLL() {
			root = null;
		}
		
		//insertion at the beginning 
		public void insert(int data) {
			if(root == null)
				root = new Node(data);
			else{
				Node new_node = new Node(data);
				new_node.next = root;
				root = new_node;
			}
		}
		
		
		//loop checking
		public boolean hasLoop(){
		
			Node slow = this.root;
      Node fast = this.root;
        
       while(fast != null && fast.next != null){
            slow = slow.next;
            fast = fast.next.next;
            if(slow == fast){
                System.out.println(slow.val);
                return true;
            }
        }
        System.out.println(slow.val);
        return false;
		} 
		
		
		//method to display linked list
		void disp(){
			if(root == null){
				System.out.println("Empty LinkedList");
				return;
			}
			Node temp = root;
			while( temp.next != null){
				System.out.print(temp.data+"->");
				temp = temp.next;
			}
			System.out.println(temp.data);
		}
	
		
		//main method
		public static void main(String[] args) {
			
			LoopInLL obj1 = new LoopInLL();
			
			//making a linked list
			obj1.insert(10);
			obj1.inert(20);
			obj1.insert(30);
	
			System.out.println("Linked List before making the loop");
			obj.disp();
			
			System.out.println("\nNow making a loop in the linked list");
			
			//the second last node now points to start
			obj1.start.next.next = obj1.start; 
	        
			if(obj1.hasLoop()){
	        	System.out.println("Yes");
	        }
	        else{
	        	System.out.println("No");
	        }	
		}
	}
