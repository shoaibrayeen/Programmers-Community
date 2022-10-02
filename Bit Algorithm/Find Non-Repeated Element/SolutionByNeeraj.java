import java.util.Scanner;

public class SolutionByNeeraj {
    /*
       Description - An Array is given and every element is appearing twice except one element. You need to find that element.
         Approach - taking xor of elements
     */
    private static int nonRepeatedElement(int[] array, int size) {

        int xorOfElements = array[0];
        for (int i = 1; i < size; i++) {
            xorOfElements ^= array[i];
        }
        return xorOfElements;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter Size : ");
        int size = sc.nextInt();
        int array[] = new int[size];
        System.out.print("Enter the array : ");
        for (int i = 0; i < size; i++)
            array[i] = sc.nextInt();
        System.out.println("Non-repeated Element :" + nonRepeatedElement(array, size));
        sc.close();
    }
}
