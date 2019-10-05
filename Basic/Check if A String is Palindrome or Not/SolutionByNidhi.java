import java.util.Scanner;

public class Palindrome {
    /**
       Program Description: This program checks if a string is a palindrome or not and returns a boolean value
       Input: a string variable
       Return: true if palindrome otherwise false
       Time Complexity: O(n)
       Solution description: incrementally comparing characters from front and back end of a string
     **/

    private static boolean isPalindrome(String input) {
        input = input.toLowerCase();
        int k = input.length() - 1;
        for (int i = 0; i < input.length()/2; i++){
            if(input.charAt(i) == input.charAt(k)) {
                k--;
            }
            else {
                return false;
            }
        }
        return true;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = s.nextLine();
        if(isPalindrome(input)){
            System.out.println(input + " is a palindrome");
        }else{
            System.out.println(input + " is not a palindrome");
        }
    }
}
