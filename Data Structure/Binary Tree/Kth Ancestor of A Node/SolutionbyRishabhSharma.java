import java.util.ArrayList;
import java.util.Scanner;

public class kAncestor {
    static int idx = 0;

    public static Node constructTree(int[] arr) {
        if (idx >= arr.length || arr[idx] == -1) return null;

        Node nn = new Node(arr[idx++]);
        nn.left = constructTree(arr);
        nn.right = constructTree(arr);

        return nn;
    }

    public static boolean nodeToRootPath(Node root, int key, ArrayList<Node> ans) {
        if (root == null) return false;

        if (root.data == key) {
            ans.add(root);
            return true;
        }

        boolean res = nodeToRootPath(root.left, key, ans) || nodeToRootPath(root.right, key, ans);
        if (res) {
            ans.add(root);
        }

        return res;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n1 = scn.nextInt();
        int[] arr1 = new int[n1];

        for (int i = 0; i < n1; i++) {
            arr1[i] = scn.nextInt();
        }

        Node root = constructTree(arr1);

        int key = scn.nextInt();

        ArrayList<Node> ans = new ArrayList<>();

        nodeToRootPath(root, key, ans);

        for (Node node : ans) {
            System.out.print(node.data + "  ");
        }
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

// Test Cases

// Input
// 13
// 1 2 4 7 -1 -1 -1 5 -1 -1 3 -1 -1
// 7
// Output
// 7  4  2  1

// Input
// 13
// 1 2 4 7 -1 -1 -1 5 -1 -1 3 -1 -1
// 3
// Output
// 7  4  2  1


// 17
// 1 2 4 7 -1 -1 -1 5 -1 -1 3 8 -1 -1 7 -1 -1 
// 8
