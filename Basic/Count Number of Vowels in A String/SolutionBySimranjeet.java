
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
public class SolutionBySimranjeet1 {
    
     public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine() ;  
        int no = NoOfVowels(str.toLowerCase()) ;
        System.out.println('Number of Vowerls' + no) ;
        
     
    }

    private static int NoOfVowels(String str) {
        
        int cnt = 0 ;
        for( int i=0 ; i<str.length() ; i++ )
        {
            char ch = str.charAt(i) ;
            if( ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' )
                cnt++ ;
        }
        return cnt ;
    }
}
