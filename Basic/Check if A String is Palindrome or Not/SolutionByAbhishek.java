/*
  Program Description - This program checks if the given string is a palindrome or not.
  Time Complexity: O(n)
  Space Complexity: O(1)
  Solution Description: Compare character by character from left and right.
*/

import java.util.*;

class SolutionByAbhishek {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string: ");
        String s = sc.nextLine();
        if (isPalindrome(s)) {
            System.out.println("It is a Palindrome");
        } else {
            System.out.println("Not a Palindrome");
        }
    }

    public static boolean isPalindrome(String s) {
        int left = 0;
        int right = s.length() - 1;

        while (left < right) {
            if (s.charAt(left) != s.charAt(right)) {
                return false;
            }

            left++;
            right--;
        }

        return true;

    }
}
