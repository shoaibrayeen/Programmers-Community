import java.util.Scanner;

class LinkedListNode {
    int data;
    LinkedListNode next;

    public LinkedListNode(int data) {
        this.data = data;
        next = null;
    }
}

public class SearchAnElement {
    private static boolean searchElement(LinkedListNode head, int searchELement) {
        boolean found = false;
        while (head != null) {
            if (head.data == searchELement) {
                found = true;
                break;
            }
            head = head.next;
        }
        return found;
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
        System.out.print("Search ELement = ");
        int n = scan.nextInt();
        System.out.println("Element found =  " + (searchElement(head, n) ? "Yes" : "No"));
    }
}
