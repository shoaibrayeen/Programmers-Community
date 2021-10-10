import java.util.*;

public class SolutionByAshutosh {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);//creating object of scanner class
        long num = sc.nextLong();
        int sum = sumOfDigits(num);
        System.out.println(sum);

    }

    public static int sumOfDigits(long num) {
        int sum = 0;
        while (num != 0) {
            sum += num % 10;
            num = num / 10;
        }
        return sum;
    }


}
