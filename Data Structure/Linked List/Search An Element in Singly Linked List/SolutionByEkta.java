/*
   program to search a node in the given linked list - Recursively
   time complexity O(n)
*/
import java.util.Scanner;

public class searchElement {
	
	//function to take linked list and element as input
	public static pair<node<Integer>, Integer> takeInput(){
		//creating a pair
		pair<node<Integer>, Integer> p = new pair<>();
		node<Integer> head=null, tail=null;
		
		Scanner s = new Scanner(System.in);
		System.out.println("enter the values of each node, -1 to stop");
		//taking input for linked list
		int data = s.nextInt();
		
		while(data != -1) {
			node<Integer> newNode = new node<>(data);
			if(head == null) {
				head = newNode;
				tail = newNode;
			}else {
				tail.next = newNode;
				tail = tail.next;
			}
			data = s.nextInt();
		}
		
		p.headOfLL = head;
		//taking element as input
		System.out.println("enter the value of node to be searched");
		p.element = s.nextInt();
		s.close();
		return p;
	}
	
	//function to search element in the linked list
	public static boolean search(node<Integer> head, int data) {
		if(head == null) {
			return false;
		}
		if(head.data == data) {
			return true;
		}
		return search(head.next, data);
	}

	public static void main(String[] args) {
		pair<node<Integer>, Integer> p = takeInput();
		node<Integer> head = p.headOfLL;;
		int data = p.element;
		
		boolean found = search(head, data);
		if(found) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
	}

}

//class node
class node<T> {
	T data;
	node<T> next;
	
	node(T data){
		this.data = data;
		next = null;
	}
}

//Generic class pair<>
class pair<T, V>{
	T headOfLL;
	V element;
}
