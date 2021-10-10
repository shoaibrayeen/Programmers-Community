import java.util.Scanner;

public class sum {
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

    public static int SUM(Node root) {
        if (root == null)
            return 0;
        int s = 0;

        s += SUM(root.left) + SUM(root.right) + root.data;

        return s;
    }

    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int[] arr = new int[n];

        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }

        Node root = constructTree(arr);

        System.out.println(SUM(root));

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
// 896

// 
// 7
// 10 20 -1 -1 30 -1 -1
// 60
