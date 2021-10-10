import java.util.Scanner;

class CheckIfPowerOfTwo {
    private static boolean check(int n) {
        if (n == 0)
            return false;

        double x = Math.log(n) / Math.log(2);

        if (Math.floor(x) == Math.ceil(x))
            return true;
        else
            return false;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = s.nextInt();
        if (check(n))
            System.out.println("Yes");
        else
            System.out.println("No");
    }
}
