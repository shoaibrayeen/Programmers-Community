/*
    Program Description: Program to check whether a character is a vowel or consonant
 */

import java.util.Scanner;
import java.util.regex.Matcher;
import java.util.regex.Pattern;

public class VowelOrConsonant {
    private static void isVowelOrConsonant(char ch) {
        Pattern pattern = Pattern.compile("[AEIOUaeiou]");
        Matcher matcher = pattern.matcher(ch + "");
        if (matcher.matches()) {
            System.out.println("Output = Vowel");
        } else {
            System.out.println("Output = Consonant");
        }
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        char ch = scan.next().charAt(0);
        if (!Character.isLetter(ch)) {
            System.out.println("Invalid input");
            return;
        }
        isVowelOrConsonant(ch);
    }
}
