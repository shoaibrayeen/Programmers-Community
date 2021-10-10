import java.util.Scanner;

public class CountNoOfSetBitsInANoUsingKthBitIsSetOrNot {

    /*
     * Problem- A number is given and you need to count number of 1s in its binary.
     * Approach - Using  bit manipulation
     * Time Complexity - O(No_of_bits)
     */

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a no. : ");
        int n = sc.nextInt();

        if (n < 0) {
            System.out.println("Converting to postive no!!");
            n = Math.abs(n);
        }

        System.out.println("No of set Bits in " + n + " are : " + countSetBits(n));
        sc.close();
    }


    //FUNCTION TO COUNT NO OF SET BITS
    private static int countSetBits(int n) {
        int k = 0, count = 0, shift;

        while (n > 0) {
            //check if the LSB is set or not
            shift = 1 << k;
            if ((shift & n) > 0) {
                count++;
            }

            //now unset only the last checked bit
            n = n & (~shift);
            //increment to check the next bit
            k++;
        }
        return count;
    }

}
