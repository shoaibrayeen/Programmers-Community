import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;
import java.util.ArrayList;
import java.util.Stack;
public class Display{
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

    public static void reverseOrder( Node root )
    {
        Stack< ArrayList<Integer> > st = new Stack<>();

        Queue<Node> qu = new LinkedList<>();
        qu.add( root );
        ArrayList<Integer> ans; 
        while( qu.size() > 0 )
        {
            int size = qu.size();
            ans = new ArrayList<>();
            while( size > 0 )
            {
                Node vtx = qu.remove();
                ans.add( vtx.data );

                if( vtx.left != null ) qu.add( vtx.left );
                if( vtx.right != null ) qu.add( vtx.right );

                size--;
            }     
            st.push( ans );      
        }

        while( st.size() > 0 )
        {
            System.out.println( st.pop() );
        }
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

        reverseOrder( root );
    }
}

// Test Cases

// Input
// 23
// 10 20 40 -1 -1 50 80 -1 -1 90 -1 -1 30 60 -1 -1 70 100 -1 -1 120 -1 -1
// Output
// [80, 90, 100, 120]
// [40, 50, 60, 70]
// [20, 30]
// [10]

