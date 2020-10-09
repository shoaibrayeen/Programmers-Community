import java.util.Scanner;
import java.util.Queue;
import java.util.LinkedList;
import java.util.ArrayList;
public class tView{
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
        if( idx >= arr.length || arr[idx] == -1 ) {
            idx++;
            return null;
        }
            

        Node nn = new Node( arr[idx++] );
        nn.left = constructTree( arr );
        nn.right = constructTree( arr );

        return nn;
    }

    public static class pair{
        Node node = null;
        int vtx = 0;

        pair( Node node, int vtx )
        {
            this.node = node;
            this.vtx = vtx;
        }
    }

    public static void width(Node node,int level, int[] maxMin){
        if(node == null) return;

        maxMin[0] = Math.max(maxMin[0],level);
        maxMin[1] = Math.min(maxMin[1],level);
        
        width(node.left, level-1,maxMin);
        width(node.right, level+1,maxMin);
    }

    public static void tView( Node root )
    {
        int[] maxMin = new int[2];
        width( root, 0, maxMin);

        int n = maxMin[0] - maxMin[1] + 1;
        // System.out.println(n);
        Integer[] ans = new Integer[n];
        Queue<pair> qu = new LinkedList<>();
        qu.add( new pair( root, -maxMin[1] ) );


        while( qu.size() != 0 )
        {
            int size = qu.size();
            while( size > 0 )
            {
                pair v = qu.remove();
                
                if( ans[v.vtx] == null ) ans[v.vtx] = v.node.data;

                if( v.node.left != null ) qu.add( new pair( v.node.left, v.vtx - 1 ) );
                if( v.node.right != null ) qu.add( new pair( v.node.right, v.vtx + 1 ) );

                size--;
            }
        }

        for( int a : ans ) System.out.print( a + " ");
        
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
        
        tView( root );

    }
}

// TestCases
// 23
// 10 20 40 -1 -1 50 80 -1 -1 90 -1 -1 30 60 -1 -1 70 100 -1 -1 120 -1 -1
// 40 20 10 30 70 120

// 15
// 1 2 4 -1 -1 5 -1 -1 3 6 -1 -1 7 -1 -1
// 4 2 1 3 7
