import java.util.Scanner;

public class Solution {
    static int idx = 0;

    public static Node constructTree(int[] arr) {
        if (idx >= arr.length || arr[idx] == -1) {
            idx++;
            return null;
        }

        Node node = new Node(arr[idx++]);
        node.left = constructTree(arr);
        node.right = constructTree(arr);

        return node;import java.util.Scanner;
        public class Solution {
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

            public static int[] diameter(Node root) {
                if (root == null) return new int[]{0, -1}; // diameter, height

                int[] lres = diameter(root.left);
                int[] res = diameter(root.right);

                int dia = Math.max(Math.max(lres[0], res[0]), lres[1] + res[1] + 2);
                int height = Math.max(lres[1], res[1]) + 1;

                return new int[]{dia, height};
            }

            public static void main(String[] args) {
                Scanner scn = new Scanner(System.in);
                int n = scn.nextInt();
                int[] arr = new int[n];
                for (int i = 0; i < n; i++) {
                    arr[i] = scn.nextInt();
                }

                Node root = constructTree(arr);

                int[] ans = diameter(root);
                System.out.println(ans[0]);
            }

            public static class Node {
                int data = 0;
                Node left = null;
                Node right = null;

                Node(int data) {
                    this.data = data;
                }
            }
        }

// Input
// 25
// 10 20 40 -1 -1 50 80 -1 -1 90 -1 -1 30 60 100 -1 -1 -1 70 110 -1 -1 120 -1 -1
// Output
// 6
    }

    public static int[] diameter(Node root) {
        if (root == null) return new int[]{0, -1}; // diameter, height

        int[] lres = diameter(root.left);
        int[] res = diameter(root.right);

        int dia = Math.max(Math.max(lres[0], res[0]), lres[1] + res[1] + 2);
        int height = Math.max(lres[1], res[1]) + 1;

        return new int[]{dia, height};
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = scn.nextInt();
        }

        Node root = constructTree(arr);

        int[] ans = diameter(root);
        System.out.println(ans[0]);
    }

    public static class Node {
        int data = 0;
        Node left = null;
        Node right = null;

        Node(int data) {
            this.data = data;
        }
    }
}

// Input
// 25
// 10 20 40 -1 -1 50 80 -1 -1 90 -1 -1 30 60 100 -1 -1 -1 70 110 -1 -1 120 -1 -1
// Output
// 6
