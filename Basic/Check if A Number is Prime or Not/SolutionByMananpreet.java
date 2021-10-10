import java.util.Scanner;

class CheckPrime {
    public static String check(int n) {
        if (n == 1)
            return "Neither prime nor composite.";
        for (int i = 2; i < n; i++) {
            if (n % i == 0)
                return "Is Not Prime";
        }
        return "Is Prime";
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.println("Enter a number");
        int n = s.nextInt();
        System.out.println(check(n));
    }

}
