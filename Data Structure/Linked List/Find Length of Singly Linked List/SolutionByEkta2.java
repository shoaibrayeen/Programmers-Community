/*
  program to find the Length of LL - Recursively
*/

import java.util.Scanner;

public class lengthOfLLRecursively {

    public static node<Integer> takeInput() {
        node<Integer> head = null, tail = null;
        System.out.println("enter the values of each node, -1 to stop");
        Scanner s = new Scanner(System.in);
        int data = s.nextInt();

        while (data != -1) {
            node<Integer> newNode = new node<>(data);
            if (head == null) {
                head = newNode;
                tail = newNode;
            } else {
                tail.next = newNode;
                tail = tail.next;
            }
            data = s.nextInt();
        }
        s.close();
        return head;
    }

    public static int countNodes(node<Integer> head) {
        if (head == null) {
            return 0;
        }
        int ans = 1 + countNodes(head.next);
        return ans;
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

    node(T data) {
        this.data = data;
        next = null;
    }
}
