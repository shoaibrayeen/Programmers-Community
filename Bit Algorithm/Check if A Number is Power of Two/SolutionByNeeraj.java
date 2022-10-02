import java.util.Scanner;
import java.util.regex.Pattern;

public class SolutionByNeeraj {
/*
    Complexity- O(n)
    Approach- Using the fact that the binary equivalent of all powers of 2 are of the form 100000......
  */

    private static String toBinary(int n) {
        //improved version of String class
        StringBuilder binary = new StringBuilder();

        while (n > 1) {
            binary.insert(0, n % 2);
            n /= 2;
        }
        binary.insert(0, n);

        return binary.toString();
    }


    private static boolean isPowerOfTwo(String binary) {
        //	USING REGEX TO MATCH
        return Pattern.matches("[1]{1}[0]{0,}", binary);
    }


    public static void main(String[] args) {

        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = sc.nextInt();
        sc.close();

        if (n < 0) {
            //no negative no. can be a power of 2
            System.out.println("No");
            return;
        }

        //convert into binary
        String binary = toBinary(n);

        //check if it is in the form 10000....
        if (isPowerOfTwo(binary))
            System.out.println("Yes");
        else
            System.out.println("No");

    }

}
