/*
    Program to count number of 1's in a decimal number's binary equivalent
 */
import java.util.Scanner;

public class CountNoOfOne {
    private static int countNoOfOne(long num) {
        int countOne = 0, exp = 0;
        long power = 1;
        while(power < num) {
            long andRes = num & power;
            if(andRes == power){
                countOne++;
            }
            power = (long)Math.pow(2, ++exp);
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
