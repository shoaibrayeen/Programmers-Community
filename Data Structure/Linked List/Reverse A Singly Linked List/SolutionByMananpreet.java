import java.util.Scanner;

class ReverseLinkedList {
    Node head;

    public static Node rev(Node head) {
        if (head == null || head.next == null)
            return head;

        Node nextnode = head.next;
        head.next = null;

        Node rear = rev(nextnode);
        nextnode.next = head;


        return rear;
    }

    public static void printList(Node curr) {
        while (curr != null) {
            System.out.print(curr.data + " ");
            curr = curr.next;
        }
        System.out.println();
    }

    public static void insertAtEnd(Node head) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter data");
        int d = sc.nextInt();
        Node temp = new Node(d);

        Node last = head;
        while (last.next != null) {
            last = last.next;
        }
        last.next = temp;
        return;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        ReverseLinkedList ll = new ReverseLinkedList();
        ll.head = new Node(0);
        System.out.println("Do you want to enter element to your linked list(y/n) ");

        char choice = (s.next()).charAt(0);
        if (choice == 'y') {
            do {
                insertAtEnd(ll.head);
                System.out.println("Do you want to add more element to your linked list(y/n)");
                choice = (s.next()).charAt(0);
            } while (choice == 'y');

        } else {
            System.out.println("No if elems: 0");
            return;
        }
        ll.head = ll.head.next;
        System.out.print("Linked list: ");
        printList(ll.head);
        Node rev = rev(ll.head);
        System.out.print("Reversed Linked list: ");
        printList(rev);
    }

    static class Node {
        int data;
        Node next;

        Node(int d) {
            next = null;
            data = d;
        }
    }
}
