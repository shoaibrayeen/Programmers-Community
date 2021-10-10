import java.util.*;

public class SolutionByAshutosh {
    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);//creating object of scanner class
        long num = sc.nextLong();//using long variable as it can hold large values
        System.out.println("" + calculateFactorial(num));//calling calculatefactorial() function it will evaluate the factorial of num
        sc.close();

    }

    public static long calculateFactorial(long num) {
        long fact = 1;
        while (num > 1) {
            fact *= num;//shorthand notation for fact=fact*num;
            num = num - 1;
        }

        return fact;
    }

}
