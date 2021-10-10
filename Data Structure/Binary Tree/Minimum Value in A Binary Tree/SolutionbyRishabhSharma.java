import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class mValue {
    static int idx = 0;

    public static Node constructTree(int[] arr) {
        if (idx >= arr.length || arr[idx] == -1) {
            idx++;
            return null;
        }

        Node nn = new Node(arr[idx++]);
        nn.left = constructTree(arr);
        nn.right = constructTree(arr);

        return nn;
    }

    public static int min(Node root) {
        int mV = (int) 1e8;
        Queue<Node> qu = new LinkedList<>();
        qu.add(root);

        while (qu.size() != 0) {
            int size = qu.size();
            while (size > 0) {
                Node vtx = qu.remove();

                mV = Math.min(mV, vtx.data);

                if (vtx.left != null) qu.add(vtx.left);
                if (vtx.right != null) qu.add(vtx.right);

                size--;
            }
        }
        return mV;

    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n1 = scn.nextInt();
        int[] arr1 = new int[n1];

        for (int i = 0; i < n1; i++) {
            arr1[i] = scn.nextInt();
        }

        Node root = constructTree(arr1);

        System.out.println(min(root));
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
// 17
// -16 3 2 -1 -1 5 7 -1 -1 4 -1 -1 5 -1 4 -1 -1
// Output
// -16

// Input
// 15
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// Output
// 1


