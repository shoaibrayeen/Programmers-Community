import java.util.*;

public class solutionByGautam {
    public static boolean isPowerOfTwo(int n) {

        if (n == 0) {
            return false;
        }
        while (n != 1 && n != -1) {
            if (n % 2 != 0)
                return false;
            n = n / 2;
        }
        return true;
    }


    public static void main(String[] args) {

        Scanner scan = new Scanner(System.in);
        int n = scan.nextInt();
        if (isPowerOfTwo(n)) {
            System.out.println("Yes");
        } else {
            System.out.println("No");
        }
    }

}