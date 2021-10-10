/*
    Program Description:  Program to find length of a singly linked list
    Time Complexity: O(n/2)
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

    private static int findLength(LinkedListNode head) {
        int nodeIndex = 0;
        while (head != null && head.next != null) {
            head = head.next.next;
            nodeIndex++;
        }
        nodeIndex++;
        return head != null ? (2 * nodeIndex) - 1 : (2 * nodeIndex) - 2;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        LinkedListNode head = null, temp = null;
        while (true) {
            int data = scan.nextInt();
            if (data == -1) {    // if user enters -1, then end the linked list
                break;
            }
            if (head == null) {
                temp = new LinkedListNode(data);
                head = temp;
            } else {
                temp.next = new LinkedListNode(data);
                temp = temp.next;
            }
            temp.next = null;
        }
        System.out.println("Length = " + findLength(head));
    }
}
