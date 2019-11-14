/*
   program to check if the two binary trees are identical
   example:       
                  1            |           1
                /   \          |         /   \
               2     3         |        3     2
              / \   / \        |       / \   / \
             4   5 6   7       |      7   6 5   4
   time complexity O(n)
*/
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class checkMirrorTree {

	//function to take trees as input
	public static TreeNode takeInput(Scanner s){
		int rootData = s.nextInt();
		if(rootData == -1) {
			return null;
		}
		TreeNode root = new TreeNode(rootData); 
		Queue<TreeNode> q = new LinkedList<>();
		q.add(root);
		
		while(!q.isEmpty()) {
			TreeNode frontNode = q.remove();
			
			int  child1 = s.nextInt();
			if(child1 != -1) {
				TreeNode node1 = new TreeNode(child1);
				q.add(node1);
				frontNode.left = node1;
			}
			int  child2 = s.nextInt();
			if(child2 != -1) {
				TreeNode node2 = new TreeNode(child2);
				q.add(node2);
				frontNode.right = node2;
			}
		}
		return root;
	}
	
	//function to check if the trees are mirror image of each other
	public static boolean checkMirror(TreeNode root1, TreeNode root2) {
		if(root1 == null && root2 == null) {
			return true;
		}
		if(root1 == null || root2 == null) {
			return false;                        //if only one corresponding node is null then false
		}
		boolean current = false;
		if(root1.data == root2.data) {           //will check current node data is same
			current = true;
		}
		boolean answer1 = checkMirror(root1.left, root2.right);
		boolean answer2 = checkMirror(root1.right, root2.left); 
		
		return current && answer1 && answer2;
	}
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("enter node data levelwise, -1 if there is no further node");
		System.out.println("enter 1st tree data");
		TreeNode root1 = takeInput(s);
		System.out.println("enter 2nd tree data");
		TreeNode root2 = takeInput(s);
		boolean result = checkMirror(root1, root2);
		
		if(result) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
	}
}


//class TreeNode
class TreeNode {
	public int data;
	public TreeNode left;
	public TreeNode right;
	
	public TreeNode(int data) {
		this.data = data;
		left = null;
		right = null;
	}
}
