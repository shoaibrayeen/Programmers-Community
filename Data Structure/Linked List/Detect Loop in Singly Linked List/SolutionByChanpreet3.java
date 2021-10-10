/*
 * Problem Statement - A linked list is given and you need to detect if there exists any loop in the linked list or not.
 * Approach - create a special field in the nodes denoting visited
 */

// NodeS = special node
class NodeS {
    int data;
    int visited;
    NodeS next;

    public NodeS(int data) {
        this.data = data;
        this.visited = 0;
        this.next = null;
    }
}

//LinkedListS = Special LinkedList
class LinkedListS {
    NodeS head = null;

    void insertEnd(int data) {
        NodeS temp = new NodeS(data);
        NodeS cur;
        if (head == null) {
            head = temp;
            return;
        }
        for (cur = head; cur.next != null; cur = cur.next) ;

        cur.next = temp;
    }

    void display() {
        if (head == null) {
            System.out.println("Linked List empty");
            return;
        }
        NodeS cur;
        for (cur = head; cur != null; cur = cur.next)
            System.out.print(cur.data + " ");

        System.out.println();
    }
}

public class ALteringStructureOfLL {
    public static void main(String[] args) {
        LinkedListS l = new LinkedListS();
        l.insertEnd(1);
        l.insertEnd(2);
        l.insertEnd(3);
        l.insertEnd(4);
        l.insertEnd(5);
        l.display();    // 1 2 3 4 5

        System.out.println("\nBefore creating a loop manually");
        checkLoop(l.head);
        l.head = createLoop(l.head);
        System.out.println("\nAfter creating a loop manually");
        checkLoop(l.head);
    }

    private static void checkLoop(NodeS head) {
        NodeS cur = head;
        while (cur != null) {
            if (cur.visited == 1) {
                System.out.println("Yes there is a loop at " + cur.data);
                return;
            }
            cur.visited = 1;
            cur = cur.next;
        }
        System.out.println("No There is No Loop");
    }

    private static NodeS createLoop(NodeS head) {
        NodeS cur = null;
        // iterate to last
        for (cur = head; cur.next != null; cur = cur.next) ;

        cur.next = head;
        return head;
    }

}
