/*
   program to check if the two binary trees are identical
   example:       
                  1            |           1
                /   \          |         /   \
               2     3         |        2     3
              / \   / \        |       / \   / \
             4   5 6   7       |      4   5 6   7
   time complexity O(n)
*/
import java.util.Scanner;
import java.util.LinkedList;
import java.util.Queue;

public class checkIdenticalTree {

	//function to take tree as input level-wise
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
	
	//function to check identical
	public static boolean checkIdentical(TreeNode root1, TreeNode root2) {
		if(root1 == null && root2 == null) {     
			return true;                         //if corresponding nodes of both are null then true
		}
		if(root1 == null || root2 == null) {
			return false;                        //if only one corresponding node is null then false
		}
		boolean current = false;
		if(root1.data == root2.data) {           //will check current node data is same
			current = true;
		}
		boolean left = checkIdentical(root1.left, root2.left);    //will check if left side tree is identical
		boolean right = checkIdentical(root1.right, root2.right); //will check if right side tree is identical
		
		return current && left && right;
	}
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("enter node data levelwise, -1 if there is no further node");
		System.out.println("enter 1st tree data");
		TreeNode root1 = takeInput(s);
		System.out.println("enter 2nd tree data");
		TreeNode root2 = takeInput(s);
		boolean result = checkIdentical(root1, root2);
		
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
