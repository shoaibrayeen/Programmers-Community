import java.util.Scanner;

class SolutionByVicky {

    private static int sum(int number) {
        int sum = 0;
        while (number > 0) {
            sum += (number % 10);
            number /= 10;
        }
        return sum;
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.println("Enter a number : ");
        int number = scanner.nextInt();
        System.out.print("The Sum of Digits of the Entered Number" + number + " is " + sum(number));
    }

}
