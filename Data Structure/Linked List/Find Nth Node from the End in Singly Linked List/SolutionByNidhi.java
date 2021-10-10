import java.util.Scanner;

/*
    Program Description: Program to find the nth node in a singly linked list
 */

class LinkedListNode {
    int data;
    LinkedListNode next;

    LinkedListNode(int data) {
        this.data = data;
        next = null;
    }
}

public class FindNthNodeFromEnd {
    private static int findNthNode(LinkedListNode head, int n) {
        int length = findLength(head);
        int index = length - n;
        if (index < 0 || n <= 0) {
            return -1;
        }
        while (index != 0) {
            head = head.next;
            index--;
        }
        return head.data;
    }

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
        System.out.println("Enter Linkedlist elements (enter -1 to end the list): ");
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
        System.out.print("N = ");
        int n = scan.nextInt();
        if (findNthNode(head, n) == -1) {
            System.out.println("Invalid value of N");
            return;
        }
        System.out.println("Nth node element = " + findNthNode(head, n));
    }
}
