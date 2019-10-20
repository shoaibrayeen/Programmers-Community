/*
    Program Description:  Program to find length of a singly linked list
    Time Complexity: O(n)
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

public class FindLength {
    private static int findLength(LinkedListNode head){
        int length = 0;
        while(head != null){
            length++;
            head = head.next;
        }
        return length;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        LinkedListNode head = null, temp = null;
        while (true) {
            int data = scan.nextInt();
            if(data == -1) {    // if user enters -1, then end the linked list
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
        System.out.println("Length = " + findLength(head));
    }
}
