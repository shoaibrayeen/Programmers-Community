/*
    Program Description: This program checks whether a number is a power of 2 or not
 */
import java.util.Scanner;

public class PowerOfTwo {
    /*
        Method Description: method to check if a number is a power of 2 
        Approach:
            -> calculate the log value of number with base 2
            -> compare log value with the floor value of log, if true then number is a power of 2
     */
    private static boolean isPowerOfTwo(long num){
        num = Math.abs(num);
        double logValue = Math.log(num)/Math.log(2);
        return logValue == Math.floor(logValue);
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("Input : ");
        long num = scan.nextLong();
        if(isPowerOfTwo(num)) {
            System.out.println("Output : Yes");
        }
        else{
            System.out.println("Output : No");
        }
    }
}
