
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
public class SolutionsBySimranjeet1 {
    
    public static int Product( int n )
    {
        int r = 0 , pdt = 1 ;
        while( n!=0 )
        {
            r = n%10 ;
            if( r!= 0 )
                pdt*=r ;
            n = n/10 ;
        }
        
        return pdt ;
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in) ;
        int n = sc.nextInt() ;
        
        int no = Product(n) ;
        
   
            System.out.println(no) ;
 
    }
}
