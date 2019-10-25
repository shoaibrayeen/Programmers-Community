/*
    Program to count number of 1's in a decimal number's binary equivalent
 */
import java.util.Scanner;

public class CountNoOfOne {
    private static int countNoOfOne(long num) {
        int countOne = 0;
        while(num != 0) {
            countOne++;
            num  &= (num-1);
        }
        return countOne;
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Enter a number: ");
        long number = scan.nextLong();
        if(number < 0) {
            System.out.println("Invalid input!");
        }
        System.out.println("No. of 1's in " + number +" : " + countNoOfOne(number));
    }
}
