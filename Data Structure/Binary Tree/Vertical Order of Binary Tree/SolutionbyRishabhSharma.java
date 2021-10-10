import java.util.ArrayList;
import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class vOrder {
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

    public static void width(Node root, int level, int[] maxMin) {
        if (root == null) return;

        maxMin[0] = Math.max(level, maxMin[0]);
        maxMin[1] = Math.min(level, maxMin[1]);

        width(root.left, level - 1, maxMin);
        width(root.right, level + 1, maxMin);
    }

    public static void vView(Node root) {
        int[] maxMin = new int[2];
        width(root, 0, maxMin);

        int n = maxMin[0] - maxMin[1] + 1;
        ArrayList<Integer>[] ans = new ArrayList[n];
        for (int i = 0; i < ans.length; i++) ans[i] = new ArrayList<>();

        Queue<pair> qu = new LinkedList<>();
        qu.add(new pair(root, -maxMin[1]));

        while (qu.size() != 0) {
            int size = qu.size();
            while (size > 0) {
                pair vtx = qu.remove();


                ans[vtx.v].add(vtx.node.data);

                if (vtx.node.left != null) qu.add(new pair(vtx.node.left, vtx.v - 1));
                if (vtx.node.right != null) qu.add(new pair(vtx.node.right, vtx.v + 1));

                size--;
            }
        }

        for (ArrayList<Integer> a : ans) {
            System.out.println(a);
        }
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = scn.nextInt();

        Node root = constructTree(arr);
        vView(root);
    }

    public static class Node {
        int data = 0;
        Node left = null;
        Node right = null;

        Node(int data) {
            this.data = data;
        }
    }

    public static class pair {
        int v = 0;
        Node node = null;

        pair(Node node, int v) {
            this.node = node;
            this.v = v;
        }
    }
}


// Input
// 19
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1
// Output
// [4]
// [2]
// [1, 5, 6]
// [3, 8]
// [7]
// [9]
