import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class lView {
    static int idx = 0;

    public static Node constructTree(int[] arr) {
        if (idx >= arr.length || arr[idx] == -1) return null;

        Node nn = new Node(arr[idx++]);
        nn.left = constructTree(arr);
        nn.right = constructTree(arr);

        return nn;
    }

    public static ArrayList<Node> leftView(Node root) {
        Queue<Node> qu = new LinkedList<>();
        ArrayList<Node> ans = new ArrayList<>();
        qu.add(root);

        while (qu.size() != 0) {
            int size = qu.size();
            ans.add(qu.peek());
            while (size > 0) {
                Node vtx = qu.remove();

                if (vtx.left != null) qu.add(vtx.left);
                if (vtx.right != null) qu.add(vtx.right);
                size--;
            }
        }
        return ans;
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n1 = scn.nextInt();
        int[] arr1 = new int[n1];

        for (int i = 0; i < n1; i++) {
            arr1[i] = scn.nextInt();
        }

        Node root = constructTree(arr1);

        ArrayList<Node> ans = leftView(root);

        for (Node nn : ans) {
            System.out.print(nn.data + " ");
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

// 13
// 1 2 4 -1 -1 5 -1 -1 3 -1 6 -1 -1
// 1 2 4
