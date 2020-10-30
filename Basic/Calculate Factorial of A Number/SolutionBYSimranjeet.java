
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
public class solution_By_Simranjeet {
    
    public static int fac( int num )
    {
         if (num >= 1)
            return num * fac(num - 1);
        else
            return 1;
    }
    
    public static void main(String args[])
   {
       Scanner sc = new Scanner(System.in) ;
       int n = sc.nextInt() ;
       
       int res = fac(n) ;
       System.out.println(res) ;
   }
}
