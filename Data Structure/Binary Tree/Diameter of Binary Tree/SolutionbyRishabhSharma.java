import java.util.Scanner;
public class dia{

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
        if( idx >= arr.length || arr[idx] == -1 ) return null;

        Node nn = new Node( arr[idx++] );
        nn.left = constructTree( arr );
        nn.right = constructTree( arr );

        return nn;
    }

    public static int height( Node root )
    {
        return root == null ? -1 : Math.max( height(root.left), height( root.right) ) + 2; 
    }

    public static int diameter( Node root )
    {
        if( root == null ) return 0;

        int ld = diameter( root.left );
        int rd = diameter( root.right );

        int lh = height( root.left );
        int rh = height( root.right );

        return Math.max( Math.max( ld, rd ), lh + rh + 2 ); 
    }

    // public static int[] diameter_02( Node root )
    // {

    // }
    
    public static void main(String[] args) {

        Scanner scn = new Scanner( System.in );
        
        int n1 = scn.nextInt();
        int[] arr1 = new int[n1];
        
        for( int i = 0; i < n1; i++ )
        {
            arr1[i] = scn.nextInt();
        }

        Node root = constructTree( arr1 );
        
        System.out.println( diameter( root ) );
    }
}

// Test Case

// Input
// 11
// 1 2 4 -1 -1 5 -1 -1 3 -1 -1
// Output
// 4
