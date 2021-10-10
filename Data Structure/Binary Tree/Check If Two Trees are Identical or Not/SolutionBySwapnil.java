import java.util.*;

// Definition for a binary tree node.
public class Solution {
    public static TreeNode constructTree(int[] arr, int index) {
        if (index > arr.length || arr[index] == -1)
            return null;
        TreeNode root = new TreeNode(arr[index++]);
        root.left = constructTree(arr, index);
        root.right = constructTree(arr, index);
        return root;

    }

    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);

        int size1 = sc.nextInt();
        int[] arr1 = new int[size1];

        for (int i = 0; i < size1; i++) {
            arr1[i] = sc.nextInt();
        }

        Node root1 = constructTree(arr1, 0);

        int size2 = sc.nextInt();
        int[] arr2 = new int[size2];

        for (int i = 0; i < size2; i++) {
            arr2[i] = sc.nextInt();
        }

        Node root2 = constructTree(arr2, 0);

        System.out.println(checkIdentical(root1, root2));


    }

    public boolean isSameTree(TreeNode p, TreeNode q) {
        if (p == null || q == null)
            return p == q;
        return p.val == q.val && isSameTree(p.left, q.left) && isSameTree(p.right, q.right);

    }

    public static class TreeNode {
        int val;
        TreeNode left;
        TreeNode right;

        TreeNode() {
        }

        TreeNode(int val) {
            this.val = val;
        }

        TreeNode(int val, TreeNode left, TreeNode right) {
            this.val = val;
            this.left = left;
            this.right = right;
        }
    }
}
