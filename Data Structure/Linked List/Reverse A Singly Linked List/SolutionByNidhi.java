/*
    Program Description: Program to reverse a given linked list
 */
import java.util.Scanner;

class LinkedListNode {
    int data;
    LinkedListNode next;

    public LinkedListNode(int data) {
        this.data = data;
        next = null;
    }
}

public class ReverseLinkedList {
    /*
        Method Description: method to reverse a linked list
        Time Complexity: O(n)
        Input Parameter: head of the original linked list
        Return Value: head of the reversed linked list
     */
     
    private static LinkedListNode reverseLinkedList(LinkedListNode head) {
        if(head == null) {
            return null;
        }
        LinkedListNode revHead = head, temp = null;
        while(head.next != null) {
            temp = head.next;
            head.next = temp.next;
            temp.next = revHead;
            revHead = temp;
        }
        return revHead;
    }
    
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        int size = scan.nextInt();                     // input size of linked list
        LinkedListNode head = null, temp = null;
        while (size-- != 0) {
            int data = scan.nextInt();
            if(data == -1) {
                break;
            }
            if(head == null) {
                temp = new LinkedListNode(data);
                head = temp;
            }
            else{
                temp.next = new LinkedListNode(data);
                temp = temp.next;
            }
            temp.next = null;
        }

        temp = head;                                // update temp to the head of original linked list
        System.out.println("Original List: ");      // print original linked list
        while(temp != null) {
            System.out.print(temp.data +" -> ");
            temp = temp.next;
        }
        System.out.println("Null");

        temp = reverseLinkedList(head);             // update temp to the head of reversed linked list
        System.out.println("Reversed List: ");      // print reversed linked list
        while(temp != null) {
            System.out.print(temp.data +" -> ");
            temp = temp.next;
        }
        System.out.println("Null");
    }
}
