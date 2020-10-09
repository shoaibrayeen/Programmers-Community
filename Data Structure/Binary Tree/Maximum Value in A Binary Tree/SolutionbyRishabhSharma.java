import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;
public class maxValue{
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

        Node nn = new Node( arr[idx++] );
        nn.left = constructTree( arr );
        nn.right = constructTree( arr );

        return nn;
    }

    public static int maX( Node root )
    {
        int mV = -(int)1e8;
        Queue<Node> qu = new LinkedList<>();
        qu.add( root );

        while( qu.size() > 0 )
        {
            int size = qu.size();
            while( size > 0 )
            {
                Node vtx = qu.remove();

                mV = Math.max( mV, vtx.data );

                if( vtx.left != null ) qu.add( vtx.left );
                if( vtx.right != null ) qu.add( vtx.right );

                size--;
            }            
        }
        return mV;

    }

    public static void main(String[] args) {
        Scanner scn = new Scanner( System.in );
        int n1 = scn.nextInt();
        int[] arr1 = new int[n1];
        
        for( int i = 0; i < n1; i++ )
        {
            arr1[i] = scn.nextInt();
        }

        Node root = constructTree( arr1 );

        System.out.println( maX( root ) );
    }
}

// Test Cases

// Input
// 17
// 6 3 2 -1 -1 5 17 -1 -1 4 -1 -1 5 -1 4 -1 -1
// Output
// 17 

// Input
// 15
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// Output
// 7
