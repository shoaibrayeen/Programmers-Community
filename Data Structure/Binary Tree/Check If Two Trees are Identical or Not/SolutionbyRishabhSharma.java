import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class identical {
    static int idx = 0;

    public static Node constructTree(int[] arr) {
        if (idx >= arr.length || arr[idx] == -1) return null;

        Node nn = new Node(arr[idx++]);
        nn.left = constructTree(arr);
        nn.right = constructTree(arr);

        return nn;
    }

    public static boolean checkIdentical(Node root1, Node root2) {
        Queue<Node> qu1 = new LinkedList<>();
        Queue<Node> qu2 = new LinkedList<>();

        qu1.add(root1);
        qu2.add(root2);

        while (qu1.size() != 0 && qu2.size() != 0) {
            Node temp1 = qu1.remove();
            Node temp2 = qu2.remove();

            if (temp1.data != temp2.data) return false;

            if (temp1.left != null) qu1.add(temp1.left);
            if (temp1.right != null) qu1.add(temp1.right);

            if (temp2.left != null) qu2.add(temp2.left);
            if (temp2.right != null) qu2.add(temp2.right);

        }

        if (qu1.size() == 0 && qu2.size() == 0) return true;
        else return false;
    }

    public static void main(String[] args) {

        Scanner scn = new Scanner(System.in);

        int n1 = scn.nextInt();
        int[] arr1 = new int[n1];

        for (int i = 0; i < n1; i++) {
            arr1[i] = scn.nextInt();
        }

        idx = 0;
        Node root1 = constructTree(arr1);

        int n2 = scn.nextInt();
        int[] arr2 = new int[n2];

        for (int i = 0; i < n2; i++) {
            arr2[i] = scn.nextInt();
        }

        idx = 0;
        Node root2 = constructTree(arr2);

        System.out.println();
        System.out.println(checkIdentical(root1, root2));


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

// 15
// 20 15 16 -1 -1 14 -1 -1 17 11 12 -1 -1 -1 -1
// 11
// 20 12 13 2 4 -1 -1 -1 -1 -1 -1 
//false


// 11
// 20 12 13 2 4 -1 -1 -1 -1 -1 -1 
// 11
// 20 12 13 2 4 -1 -1 -1 -1 -1 -1 
// true

