import java.util.Scanner;
public class height{

    public static class Node
    {
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

    public static int HEIGHT( Node root )
    {
        return root == null ? -1 : Math.max( HEIGHT( root.left ), HEIGHT( root.right ) ) + 1;
    }
    public static void main(String[] args) {
         
        Scanner scn = new Scanner(System.in);

        int n = scn.nextInt();
        int[] arr = new int[n];

        for( int i = 0; i < n; i++ )
        {
            arr[i] = scn.nextInt();
        }

        Node root = constructTree( arr );

        System.out.println( HEIGHT( root ) );
    }
}

// Test Cases

// 15
// 20 15 16 -1 -1 14 -1 -1 17 13 12 -1 -1 -1 -1       
// 3

// 11
// 20 12 13 2 4 -1 -1 -1 -1 -1 -1    
// 4

