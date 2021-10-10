import java.util.Scanner;

class SolutionByVyomChandra {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a number : ");
        long l = sc.nextLong();
        for (long i = 1; i <= l; i++) {
            if (l % i == 0)
                System.out.print(i + " ");
        }
    }
}
