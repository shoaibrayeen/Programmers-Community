import java.util.Scanner;

class NumberOfSetBits {
    public static int count(int n) {
        int count = 0;

        while (n > 0) {
            if ((n & 1) == 1) {
                count += 1;
            }
            n >>= 1;     //right shifting
        }
        return count;
    }

    public static void main(String[] args) {
        Scanner s = new Scanner(System.in);
        System.out.print("Enter a number : ");
        int n = s.nextInt();
        System.out.println("Number of set bits in " + n + ":" + count(n));

    }
}
