
package javaapplication1;
import java.util.*;

public class SolutionByAshutosh {
    public static void main(String args[]){
        Scanner sc=new Scanner(System.in);//creating object of scanner class
        char alpha=sc.next().charAt(0);//way to input a single character using scanner class
        alpha=Character.toLowerCase(alpha);//converting the character to lower case in case if it is not
        if(isVowel(alpha))//calling isVowel() function it will check whether the entered character is vowel or not
            System.out.println("Vowel");
        else
            System.out.println("Consonant");            
         
    }
    public static boolean isVowel(char ch){
       boolean isvowel=false;
        switch(ch){
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                isvowel=true;
                
       }
               
        return isvowel;
    }
    
}
