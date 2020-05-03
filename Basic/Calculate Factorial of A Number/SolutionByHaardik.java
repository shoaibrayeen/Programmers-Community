import java.util.Scanner;

public class Factorial {
    public static void main(String[] args){
        System.out.println("Enter the number whose factorial is to be found out");
        Scanner in = new Scanner(System.in);
        int number = in.nextInt();
        if(number<0){
            System.out.println("Factorial is not defined for negative numbers!");
        }
        else {
            System.out.println("The factorial of " + number + " is " + factorial(number));
        }
    }

    public static int factorial(int n){
        if (n==0){
            return 1;
        }
        else{
            return n * factorial(n-1);
        }
    }
}
