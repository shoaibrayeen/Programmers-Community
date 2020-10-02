public class SumOfLeftLeaves {
    public static void main(String[] args) {
        BinaryTree binaryTree = new BinaryTree();
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
    static Node root;

    public BinaryTree() {
        root = null;
        initialize();
    }
    private void initialize() {
        //Initialize the tree to the example given
        root = new Node(1);
        root.left = new Node(2);
        root.right = new Node(2);
        root.left.left = new Node(5);
        root.left.right = new Node(4);
        root.right.left = new Node(2);
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
