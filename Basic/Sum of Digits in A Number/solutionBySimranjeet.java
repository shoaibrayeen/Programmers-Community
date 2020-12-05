
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
public class solutions_by_Simranjeet {
    
       public static int sum( int n )
    {
        int r = 0 , sum = 0 ;
        while( n!=0 )
        {
            r = n%10 ;
            sum += r ;
            n = n/10 ;
        }
        
        return sum ;
    }
    
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in) ;
        int n = sc.nextInt() ;
        
        int no = sum(n) ;
        
   
            System.out.println(no) ;
 
    }
}
