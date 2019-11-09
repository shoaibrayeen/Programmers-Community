/*
   program to find the length of  a singly Linked List
*/
import java.util.Scanner;

public class lengthOfSinglyLL {
	//function to take input
	public static node<Integer> takeInput(){
		node<Integer> head=null, tail=null;
		System.out.println("enter the values of each node, -1 to stop");
		Scanner s = new Scanner(System.in);
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
		s.close();
		return head;
	}
	
	//function to  count nodex and returns length of LL
	private static int countNodes(node<Integer> head){
        int index = 0;
        while(head != null && head.next != null){
            head = head.next.next;
            index++;
        }
        index++;
        if(head == null) {
        	return (2 * index) - 2;
        }else {
        	return (2 * index) - 1;
        }
    }
	
	public static void main(String[] args) {
		node<Integer> head = takeInput();
		int length = countNodes(head);
		System.out.println("Length of Linked List is " + length);
	}

}


//node class
class node<T> {
	T data;
	node<T> next;
	
	node(T data){
		this.data = data;
		next = null;
	}
}
