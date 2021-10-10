import java.io.*;
import java.util.*;

class Solution {
    public static void main(String[] args) {
        StackUsingLL stack = new StackUsingLL();
        Scanner sc = new Scanner(System.in);
        System.out.println("1. Push ");
        System.out.println("2. Pop ");
        System.out.println("3. Top ");
        System.out.println("4. IsEmpty ");
        System.out.println("5. Exit ");

        int opt = sc.nextInt();

        while (opt != 5) {
            switch (opt) {
                case 1:
                    int data = sc.nextInt();
                    stack.push(data);
                    break;
                case 2:
                    int del = stack.pop();
                    if (del == -1) {
                        System.out.println("Empty stack");
                    } else {
                        System.out.println(del);
                    }
                    break;
                case 3:
                    int sTop = stack.top();
                    if (sTop == -1) {
                        System.out.println("Empty stack");
                    } else {
                        System.out.println(sTop);
                    }
                    break;
                case 4:
                    System.out.println(stack.isEmpty());
                    break;
                default:
                    System.out.println("Choose again");
            }
            opt = sc.nextInt();
        }
    }

    public static class Node {
        int data;
        Node next;

        Node(int data) {
            this.data = data;
            next = null;
        }
    }

    public static class StackUsingLL {
        private Node head;
        private int size;

        public StackUsingLL() {
            head = null;
            size = 0;
        }

        int size() {
            return size;
        }

        boolean isEmpty() {
            return size() == 0; // head == null
        }

        int top() {
            if (size() == 0) {
                return -1;
            }
            return head.data;
        }

        void push(int element) {

            Node newNode = new Node(element);
            newNode.next = head;
            head = newNode;
            size++;

        }

        int pop() {
            if (size() == 0) {
                return -1;
            }
            int tempdata = head.data;
            head = head.next;
            size--;
            return tempdata;
        }
    }
}
