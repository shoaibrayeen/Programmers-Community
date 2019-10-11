import java.awt.*;
import java.util.Scanner;

public class palindrome {
    static void pal(String s){
        int i=0,j=s.length()-1,f=0;
        while (i<j){
            if(s.charAt(i) != s.charAt(j)){
                f++;
            }
            i++;
            j--;
        }
        if(f!=0){
            System.out.println("Not a palindrome");
        }
        else
        {
            System.out.println("It is a palindrome");
        }
    }
    public static void main(String args[]){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the String: ");
        String a = sc.nextLine();
        pal(a);
    }
}
