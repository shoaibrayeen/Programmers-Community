/*
    Program Description: Program to calculate nth fibonacci number
    Approach: Store the previously calculated fibonacci numbers in a separate array and access it to calculte the value of new fibonacci numbers 
 */
import java.util.Scanner;

public class Fibonacci {
    private static int[] fibonacci;                     // fibonacci array to store already calculated fibonacci numbers
    private static int calculateNthFibonacci(int n) {
        if(n == 0 || n == 1) {
            return fibonacci[n];
        }
        if(fibonacci[n-2] != 0){
            if(fibonacci[n-1] != 0){
                fibonacci[n] = fibonacci[n-1] + fibonacci[n-2];
            }
            else{
                fibonacci[n] = fibonacci[n-2] + calculateNthFibonacci(n-1);
            }
            return fibonacci[n];
        }
        fibonacci[n] = calculateNthFibonacci(n-1) + calculateNthFibonacci(n-2);
        return fibonacci[n];
    }

    public static void main(String[] args) {
        Scanner scan = new Scanner(System.in);
        System.out.print("N = ");
        int num = scan.nextInt();
        if(num < 0) {
            System.out.println("Invalid input");
            return;
        }
        fibonacci = new int[num+1];
        fibonacci[0] = 0;
        fibonacci[1] = 1;
        System.out.println("Output = " + calculateNthFibonacci(num));
    }
}
