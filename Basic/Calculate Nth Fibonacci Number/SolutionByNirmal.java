import java.util.Scanner;

class SolutionByNirmal {

    public static int first(int m) {
        int n = m - 1;
        return fib(n);
    }

    public static int fib(int n) {

        if (n <= 1)
            return n;

        return fib(n - 1) + fib(n - 2);
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = s.nextInt();
        System.out.println("The " + n + " th fibonacci number is : " + first(n));
    }
}
