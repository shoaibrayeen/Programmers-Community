import java.util.Scanner;

class SolutionByVyomChandra {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter two numbers: ");
        int a = sc.nextInt();
        int b = sc.nextInt();
        while (a != b) {
            if (a < b)
                b = b - a;//mistake corrected
            else
                a = a - b;
        }
        System.out.print(a);
    }
}
