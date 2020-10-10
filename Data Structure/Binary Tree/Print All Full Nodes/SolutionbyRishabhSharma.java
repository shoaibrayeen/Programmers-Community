import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;

public class fNodes{
    public static class Node{
        int data;
        Node left = null;
        Node right = null;
        
        Node( int data )
        {
            this.data = data;
        }
    }

    static int idx = 0;
    public static Node constructTree( int[] arr )
    {
        if( idx >= arr.length || arr[idx] == -1 )
        {
            idx++;
            return null;
        }

        Node node = new Node( arr[idx++] );
        node.left = constructTree( arr );
        node.right = constructTree( arr );

        return node;
    }

    public static void fNodes( Node root )
    {
        if( root == null ) return;

        if( root.left != null && root.right != null ) System.out.print( root.data + " ");

        fNodes( root.left );
        fNodes( root.right );
    }

    public static void main(String[] args) {
        Scanner scn = new Scanner(System.in);
        int n = scn.nextInt();
        int[] arr = new int[n];
        for( int i = 0; i < n; i++ ) arr[i] = scn.nextInt();

        Node root = constructTree( arr );

        fNodes( root );
    }
}

// Test Case

// 13
// 10 8 3 -1 -1 5 -1 -1 2 7 -1 -1 -1
// 10 8


