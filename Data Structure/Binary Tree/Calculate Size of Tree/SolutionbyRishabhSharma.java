import java.util.Scanner;

public class size {
    static int idx = 0;

    public static Node constructTree(int[] arr) {
        if (idx >= arr.length || arr[idx] == -1) {
            idx++;
            return null;
        }

        Node node = new Node(arr[idx++]);
        node.left = constructTree(arr);
        node.right = constructTree(arr);

        return node;
    }

    public static int size(Node root) {
        return root == null ? 0 : size(root.left) + size(root.right) + 1;
    }

    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }

        Node root = constructTree(arr);

        System.out.println(size(root));

    }

    public static class Node {
        int data;
        Node left = null;
        Node right = null;

        Node(int data) {
            this.data = data;
        }
    }
}

// Test Case 

// Sample Input

//
// 37
// 50 50 25 25 12 12 -1 -1 -1 -1 37 37 30 30 -1 -1 -1 -1 -1 -1 75 75 62 62 -1 -1 70 70 -1 -1 -1 -1  87 87 -1 -1 -1 
//18

// 
// 7
// 10 20 -1 -1 30 -1 -1
