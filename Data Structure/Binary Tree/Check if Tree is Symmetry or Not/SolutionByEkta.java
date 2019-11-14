/*
   program to check if the tree is symmetric
   example:       
                  1         
                /   \  
               2     2        
              / \   / \      
             4   5 5   4     
   time complexity O(n)
*/

import java.util.LinkedList;
import java.util.Queue;
import java.util.Scanner;

public class checkSymmetry {
	
	//function to take tree as input
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
	
	//function to check mirror
	public static boolean checkSymmetry(TreeNode root1, TreeNode root2) {
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
		boolean answer1 = checkSymmetry(root1.left, root2.right);  
		boolean answer2 = checkSymmetry(root1.right, root2.left);    
		
		return current && answer1 && answer2;
	}
	
	public static void main(String[] args) {
		Scanner s = new Scanner(System.in);
		System.out.println("enter node data levelwise, -1 if there is no further node");
		System.out.println("enter tree data");
		TreeNode root = takeInput(s);
		boolean result = checkSymmetry(root.left, root.right);
		
		if(result) {
			System.out.println("YES");
		}else {
			System.out.println("NO");
		}
	}

}
