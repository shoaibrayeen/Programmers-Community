import java.util.Scanner;

public class CountNoOfSetBitsInANo {
    /*
     * Problem- A number is given and you need to count number of 1s in its binary.
     * Approach - Using  bit manipulation
     * Time Complexity - O(No_of_set_bits)
     * */


    //FUNCTION TO COUNT NO OF SET BITS
    private static int countSetBits(int n) {
        int count = 0;
        while (n > 0) {
            n = n & (n - 1);
            count++;
        }
        return count;
    }


    //MAIN
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a no. : ");
        int n = sc.nextInt();
        if (n < 0) {
            System.out.println("Converting to postive no!!");
            n = Math.abs(n);
        }
        System.out.println("No of set Bits in " + n + " are :" + countSetBits(n));
        sc.close();
    }


}
 
