import java.util.Scanner;

class Main {
    Node head;

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        Main s = new Main();
        s.head = new Node(0);
        int op, data;
        System.out.println("1. Push ");
        System.out.println("2. Pop ");
        System.out.println("3. Display ");
        System.out.println("4. Top ");
        System.out.println("5. IsEmpty ");
        System.out.println("6. Exit ");
        while (true) {
            System.out.print("\nEnter your choice\t:\t");
            op = sc.nextInt();
            if (op == 1) {
                System.out.print("Enter data\t:\t");
                data = sc.nextInt();
                s.push(data);
            } else if (op == 2) {
                s.pop();
            } else if (op == 3) {
                s.print();
            } else if (op == 4) {
                s.top();
            } else if (op == 5) {
                s.isEmpty();
            } else if (op == 6) {
                return;
            } else {
                System.out.println("Wrong choice ");
            }

        }
    }

    public void push(int x) {
        Node t = new Node(x);
        t.next = head.next;
        head.next = t;
    }

    public void pop() {
        if (head.next == null) {
            System.out.println("Stack underflow");
            return;
        } else if (head.next.next == null) {
            head.next = null;
        } else {
            System.out.println("Element Popped");
            head.next = head.next.next;
        }

    }

    public void top() {
        if (head.next != null) {
            System.out.println("Top: " + head.next.data);
        } else {
            System.out.println("The stack is empty");
        }
    }

    public void isEmpty() {
        if (head.next == null) {
            System.out.println("Stack is Empty.");
        } else {
            System.out.println("Stack is not Empty");
        }
    }

    public void print() {
        Node t = head.next;
        if (t == null) {
            System.out.println("Stack is Empty.");
            return;
        }
        System.out.print("Stack: ");
        while (t != null) {
            System.out.print(t.data + " ");
            t = t.next;
        }
        System.out.println();
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
