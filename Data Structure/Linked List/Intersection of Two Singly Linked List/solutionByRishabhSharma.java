import java.util.*;

public class Solution{
    public static void main(String[] args) {
        Scanner scn = new Scanner( System.in );
        LinkedList<Integer> ll1 = new LinkedList<>();

        System.out.println("Enter Values in LinkedList 1");
        int ch = 0;
        do{
            System.out.println(" 1. Add ");
            System.out.println(" 2. Exit ");
            ch = scn.nextInt();

            if( ch == 1 )
            {
                System.out.println("Enter value ");
                int val = scn.nextInt();
                ll1.addLast( val );

            }
            
        }while( ch!= 2 );

        LinkedList<Integer> ll2 = new LinkedList<>();
        System.out.println("Enter Values in LinkedList 2");
        int ch2 = 0;
        do{
            System.out.println(" 1. Add ");
            System.out.println(" 2. Exit ");
            ch2 = scn.nextInt();

            if( ch2 == 1 )
            {
                System.out.println("Enter value ");
                int val = scn.nextInt();
                ll2.addLast( val );

            }
            
        }while( ch2!= 2 );

        System.out.println( ll1 );
        System.out.println( ll2 );

        printIntersection( ll1, ll2 );

    }

    public static void printIntersection( LinkedList<Integer> ll1, LinkedList<Integer> ll2 )
    {
        HashMap<Integer, Integer> hm = new HashMap<>();
        
        for( int i = 0; i < ll1.size(); i++  )
        {
            int val = ll1.get( i );
            if( hm.containsKey( val ) == true )
            {
                hm.put( val, hm.get( val ) + 1 );
            }
            else
            {
                hm.put( val , 1 );
            }
        }

        for( int i = 0; i < ll2.size(); i++ )
        {
            int val = ll2.get(i);
            if( hm.containsKey(val) == true )
            {
                System.out.println( val );
                hm.remove( val );
            }
        } 
    }
}


//Test Case
// 1 99 1 75 1 65 1 85 2 1 55 1 52 1 99 1 75 2
// Output ==> 99 75
