/*
    Program Description: Program to reverse a string
 */
import java.util.Scanner;

public class ReverseString {
    private static String reverse(String input) {
        StringBuilder str = new StringBuilder(input);
        int k = str.length()-1;
        for(int i = 0; i < str.length()/2; i++){
            char temp = str.charAt(i);
            str.setCharAt(i, str.charAt(k));
            str.setCharAt(k, temp);
            k--;
        }
        return str.toString();
    }
    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        String str = scan.nextLine();
        System.out.println(reverse(str));
    }
}
