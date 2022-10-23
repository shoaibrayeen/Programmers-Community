import java.util.*;
public class MyClass {
    public static void main(String args[]) {
        Scanner kb=new Scanner(System.in);
        char ch;
        System.out.println("Enter a character to check whether it is a consonant or a vowel");
        ch=kb.next().charAt(0);
        String n;
        n="AEIOUaeiou";
        if(n.indexOf(ch)==-1)
        {
            System.out.println("It is a consonant");
        }
        else
        {
            System.out.println("It is a vowel");
        }


    }
}
