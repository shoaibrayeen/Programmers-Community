import java.util.LinkedList;
import java.util.Scanner;

public class spiral {
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

    public static void spiralDisplay(Node root) {
        LinkedList<Node> qu = new LinkedList<>();
        LinkedList<Node> tQu = new LinkedList<>();

        qu.addLast(root);

        int cnt = 1;
        System.out.println(qu.getFirst().data);
        while (qu.size() != 0) {
            int size = qu.size();
            while (size > 0) {
                Node vtx = qu.removeFirst();

                if (vtx.left != null) qu.add(vtx.left);
                if (vtx.right != null) qu.add(vtx.right);

                size--;
            }
            if (cnt == 0) {
                while (qu.size() != 0) {
                    Node rVtx = qu.removeFirst();
                    System.out.print(rVtx.data + " ");
                    tQu.addLast(rVtx);
                }
            } else {
                while (qu.size() != 0) {
                    Node rVtx = qu.removeLast();
                    System.out.print(rVtx.data + " ");
                    tQu.addFirst(rVtx);
                }
            }
            cnt = (cnt + 1) % 2;
            qu = tQu;
            tQu = new LinkedList<>();
            System.out.println();
        }
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++)
            arr[i] = scn.nextInt();

        Node root = constructTree(arr);

        spiralDisplay(root);
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
// Input 
// 19
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 8 -1 -1 7 -1 9 -1 -1
// Output
// 1
// 3 2 
// 4 5 6 7 
// 9 8 
