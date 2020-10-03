import java.util.Scanner;

public class SumOfLeftLeaves {
    public static void main(String[] args) {
        BinaryTree binaryTree = new BinaryTree();
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter number of nodes");
        int n = sc.nextInt();
        while(n-- > 0){
            System.out.println("Enter node value");
            int nodeValue = sc.nextInt();
            binaryTree.insert(nodeValue);
        }
        System.out.println(binaryTree.getLeftLeavesSum());
    }
}
class Node{
    Node left;
    Node right;
    int data;

    Node(int data){
        this.data = data;
    }
}

class BinaryTree{
    private  Node root;
    public BinaryTree() {
        root = null;
    }
    public void insert(int value){
        root = insertHelper(root, value);
    }
    public Node insertHelper(Node root, int value) {
        //Insert items inside the tree
        if(root == null){
            root = new Node(value);
            return root;
        }
        Node parent = null;
        Node curr = root;
        while (curr != null)
        {
            // update parent node as current node
            parent = curr;

            // if given key is less than the current node,
            // go to left subtree else go to right subtree
            if (value < curr.data) {
                curr = curr.left;
            }
            else {
                curr = curr.right;
            }
        }
        if (value < parent.data) {
            parent.left = new Node(value);
        }
        else {
            parent.right = new Node(value);
        }
        return root;
    }

    public int getLeftLeavesSum(){
        return helper(root, false);
    }
    private int helper(Node node, boolean left){
        if(node == null){
            return 0;
        }
        //Check if the given node is a left leaf
        if(node.left == null && node.right == null && left){
            return node.data;
        }

        //Recursively find other left leaves
        return helper(node.left, true) + helper(node.right, false);
    }
}
