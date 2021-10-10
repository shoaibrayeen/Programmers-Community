import java.util.Scanner;

public class isPalindrome {

    public static void main(String[] args) {
        // TODO Auto-generated method stub

        Scanner input = new Scanner(System.in);
        String word = input.next();

        boolean palindrome = true;

        int min = 0;
        int max = word.length() - 1;

        while (max > min) {

            if (word.charAt(min) != word.charAt(max))
                palindrome = false;
            min++;
            max--;
        }

        System.out.print(palindrome ? "YES" : "NO");


    }

}
