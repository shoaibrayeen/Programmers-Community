
import java.util.Scanner;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author LENOVO
 */
public class SolutionsBySimranjeet {
    
    public static int EvenOdd( int n )
    {
         if( n&1 == 0 )
              return 0 ;
         else 
             return 1 ;
    }
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in) ;
        int n = sc.nextInt() ;
        
        int no = EvenOdd(n) ;
        
        if( no == 0 )
            System.out.println("EVEN") ;
        else
            System.out.println("ODD") ;
    }
}
