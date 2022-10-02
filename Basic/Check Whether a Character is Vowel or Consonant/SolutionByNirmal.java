import java.util.Scanner;
import java.util.regex.Pattern;

public class SolutionByNirmal {
    /*
     * Problem - A Character is given to you and You need to Whether it's is Vowel or Consonant.
     * Approach - using regex
     * */
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        char ch;

        System.out.println("Enter a character");
        ch = sc.next().charAt(0);
        if (isVowel(ch))
            System.out.println("Vowel");
        else
            System.out.println("Consonant");

        sc.close();
    }

    private static boolean isVowel(char ch) {

        return Pattern.matches("[AEIOUaeiou]", ch + "");
    }

}
