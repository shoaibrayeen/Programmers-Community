import java.util.Scanner;

class InsertionDeletion {
    Node head;

    public static void printList(Node head) {
        if (head == null) {
            System.out.print("List is empty");
            return;
        }
        Node temp = head;

        while (temp != null) {
            System.out.print(temp.data + " ");
            temp = temp.next;

        }
        System.out.println();
    }

    public static void main(String[] args) {
        InsertionDeletion ll = new InsertionDeletion();
        Scanner s = new Scanner(System.in);
        char choice;
        int op;
        System.out.print("MENU:");
        System.out.println("1. Insert element at the beginning of the list");
        System.out.println("2. Insert element at the end of the list");
        System.out.println("3. Delete element from the beginning of the list");
        System.out.print("4. Delete element from the end of the list");
        System.out.println("5. Display list");

        do {
            System.out.print("Which operation to perform: ");
            op = s.nextInt();
            if (op == 1 || op == 2) {
                int data;
                System.out.print("Enter data: ");
                data = s.nextInt();
                if (op == 1)
                    ll.head = ll.insertAtBegin(ll.head, data);
                else
                    ll.head = ll.insertAtEnd(ll.head, data);

            } else if (op == 3)
                ll.head = ll.deleteFromBegin(ll.head);
            else if (op == 4)
                ll.head = ll.deleteFromEnd(ll.head);
            else if (op == 5)
                ll.printList(ll.head);
            else
                System.out.print("Wromg choice entered");

            System.out.print("Do you want to execute more operations (y/n)?");
            choice = (s.next()).charAt(0);
        } while (choice == 'y');


    }

    public Node insertAtEnd(Node head, int d) {
        Node temp = head;
        Node newnode = new Node(d);
        if (head == null) {
            head = newnode;
            return head;
        }
        while (temp.next != null) {
            temp = temp.next;
        }
        temp.next = newnode;
        return head;

    }

    public Node insertAtBegin(Node head, int d) {
        Node newnode = new Node(d);
        if (head != null)
            newnode.next = head;

        head = newnode;
        return head;
    }

    public Node deleteFromBegin(Node head) {
        if (head != null)
            head = head.next;
        return head;

    }

    public Node deleteFromEnd(Node head) {
        if (head.next == null)
            return null;
        Node temp = head;
        while (temp.next.next != null) {
            temp = temp.next;
        }
        temp.next = null;
        return head;

    }

    static class Node {
        int data;
        Node next;

        Node(int d) {
            data = d;
            next = null;
        }
    }
}
